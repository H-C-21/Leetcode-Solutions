class Solution {
public:

     vector<unordered_set<char>> rec;
     bool isPossible(vector<vector<char>>& board,int row, int col, char val, unordered_set<char>& occ){
         
         for(int i = 0; i<9; i++){
             if(board[row][i] == val){
                 return false;
             }
             if(board[i][col] == val){
                 return false;
             }
         }
         auto it = occ.find(val);

        if (it != occ.end()) {
            return false;
        }
        return true;
     }

    int findblock(int row,int col){
        int a = col/3;
        int b = row/3;
        return b*3 + a;
    }

    bool helper(vector<vector<char>>& board,int row,int col){

            if(row == 9){
                return true;
            }


        if(board[row][col] != '.'){
            return helper(board,row+(col/8),(col+1)%9);
            }
        
        int block = findblock(row,col);
        for(int i = 1; i<10; i++){
            if(isPossible(board,row,col,i+'0',rec[block])){
                board[row][col] = i+'0';
                rec[block].insert(i+'0');
                if(helper(board,row+(col/8),(col+1)%9)) {
                    return true;
                }
                board[row][col] = '.';
                rec[block].erase(i+'0');
            }
        }
            return false;

    }

    void solveSudoku(vector<vector<char>>& board) {
       
        unordered_set<char> curr;

    for(int l = 0; l<3; l++){
        for(int k = 0; k<3; k++){
          curr.clear();
          for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                if(board[i+l*3][j+k*3] != '.'){
                    curr.insert(board[i+l*3][j+k*3]);
                }
            }
        }
        rec.push_back(curr);
        }
    }

    helper(board,0,0);

   
    }
};
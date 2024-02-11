class Solution {
public:

   

    bool helper(vector<vector<char>>& board, pair<int,int> pos, int index, string& word){
        if(index == word.size()){
            return true;
        }
        
        if(pos.first<0 || pos.second<0 || pos.first >= board.size() || pos.second >= board[0].size()){
            return false;
        }

        if(board[pos.first][pos.second] != word[index]){
            return false;
        }
        
        board[pos.first][pos.second] = '0';
        index++;
        bool flag = (helper(board,make_pair(pos.first+1,pos.second),index,word) || helper(board,make_pair(pos.first,pos.second+1),index,word)
            || helper(board,make_pair(pos.first-1,pos.second),index,word) || helper(board,make_pair(pos.first,pos.second-1),index,word));

            board[pos.first][pos.second] = word[index-1];
            return flag;

        
    }


    bool exist(vector<vector<char>>& board, string word) {

        // string current = ""
        int index = 0;
        pair<int,int> pos(0,0);

       for(int i = 0; i<board.size(); i++){
           for(int j = 0; j<board[0].size(); j++){
               if(helper(board,make_pair(i,j),0,word)){
                   return true;
               }
           }
       }

       for(int i = 0; i<board.size(); i++){
           for(int j = 0; j<board[0].size(); j++){
                cout<<board[i][j]<<" ";
           }
           cout<<endl;
       }
        return false;

    }
};
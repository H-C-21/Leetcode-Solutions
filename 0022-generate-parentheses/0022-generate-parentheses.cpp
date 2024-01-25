class Solution {
public:

    void createString(string s, int left, int right, vector<string> &r,int n){
        
        if(left == n && right == n){
            r.push_back(s);
            return ;
        }

        if(left == 0 && right == 0){
            s += '(';
            createString(s,1,0,r,n);
            return ;
        }

        if(right == left){
            s += '(';
            createString(s,left+1,right,r,n);

        } else if (left == n){
            s += ')';
            createString(s,left,right+1,r,n);
        } else {
            string p = s;
            p = p+'(';
            s = s+ ')';
            createString(p,left+1,right,r,n);
            createString(s,left,right+1,r,n);

        }

    }



    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        
        if(n == 0){
            return ans;
        }
        string s = "";
        createString(s,0,0,ans,n);

        return ans;
        
        
        
        
    }
};
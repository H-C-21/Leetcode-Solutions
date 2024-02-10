class Solution {
public:
    
    bool isPalindrome(string s){
        
        int n = s.size();
        for(int i = 0; i<n/2;i++){
            if(s[i] != s[n-i-1]){
                return false;
            }
        }        
        return true;
    }
    
    void helper(vector<vector<string>>& ans, string s, string curr,vector<string> ind, int index){
        if(index == s.size()){
            if(curr != ""){
            //    if(isPalindrome(curr)){  
                    return ;
                // }
            }
            ans.push_back(ind);
            return ;
        }

        curr += s[index];
        helper(ans,s,curr,ind,index+1);

        if(isPalindrome(curr)){
            ind.push_back(curr);
            curr = "";
            helper(ans,s,curr,ind,index+1);
        }



    }

    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        string curr;
        vector<string> ind;
        if(s.size() == 0){
            return ans;
        }
        
        helper(ans,s,curr,ind,0);

        return ans;
    }
};
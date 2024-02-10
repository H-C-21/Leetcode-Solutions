class Solution {
public:
    
    bool isPalindrome(const string& s, int start, int end) {
        while(start <= end) {
            if(s[start++] != s[end--])
                return false;
        }
        return true;
    }
    
    void helper(vector<vector<string>>& ans, string& s ,vector<string>& ind, int index){
        if(index == s.size()){
            ans.push_back(ind);
            return ;
        }
        
        for(int i = index; i<s.size(); i++){
            if(isPalindrome(s,index,i)){
                ind.push_back(s.substr(index,i-index+1));
                helper(ans,s,ind,i+1);
                ind.pop_back();
                
            }
        }

    }

    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        string curr;
        vector<string> ind;
        if(s.size() == 0){
            return ans;
        }
        
        helper(ans,s,ind,0);

        return ans;
    }
};
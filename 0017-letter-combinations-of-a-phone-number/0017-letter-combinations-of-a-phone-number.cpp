class Solution {
public:
    
    vector<string> rec = {"abc","def","ghi","jkl", "mno", "pqrs","tuv","wxyz"};
    
    void helper(string& digit, vector<string>& ans, string& curr, int index){
        
    if(index == digit.size()){
        cout<<curr<<endl;
        ans.push_back(curr);
        return ;
    }
    
        for(int i = 0; i<rec[(digit[index]-'0')-2].size(); i++){
            curr.push_back(rec[(digit[index]-'0')-2][i]);
            helper(digit,ans,curr,index+1);
            curr.erase(curr.size() - 1);     
        }
        
        
        
    }
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0){
            return ans;
        }
    
        string curr;
        
        helper(digits,ans,curr,0);
        return ans;
        
        
        
    }
};
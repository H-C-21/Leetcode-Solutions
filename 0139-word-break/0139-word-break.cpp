class Solution {
public:
    unordered_set<string> rec;
    unordered_map<string,bool> memo;
    // memo[""] = true;
    bool helper(string s){
        if(s.size() == 0){
            return true;
        }

        if(memo.find(s) != memo.end()){
            return memo[s];
        }

        for(int i = 0; i<s.size(); i++){
            string left = s.substr(0,i+1);
            string right = s.substr(i+1);
            if(rec.count(left) &&  helper(right)){
                memo[s] = true;
                return true;
            }
        }

        memo[s] = false;
        return false;
        
    }


    bool wordBreak(string s, vector<string>& wordDict) {
        
        for(int i =0; i<wordDict.size(); i++){
            rec.insert(wordDict[i]);
        }
        string curr;
        return helper(s);
    }
};
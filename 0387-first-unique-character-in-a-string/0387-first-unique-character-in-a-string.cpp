class Solution {
public:
    int firstUniqChar(string s) {
        
        int rec[26] = {0};
        
        for(int i = 0;i<s.size();i++){
            if(rec[s[i]-'a'] == 0){
                rec[s[i]-'a'] = i+1;
            } else {
                rec[s[i]-'a'] = -1;
            }
            // cout<<s[i]<<" "<<rec[s[i]]<<endl;
        }
        
        int ans = INT_MAX;
        for(int i = 0; i<26; i++){
            if(rec[i] > 0){
                ans = min(ans,rec[i]-1);
            }
        }
        if(ans != INT_MAX){
            return ans;
        }

    return -1;

    }
};
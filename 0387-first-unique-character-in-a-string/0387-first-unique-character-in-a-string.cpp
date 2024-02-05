class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> rec;
        
        for(int i = 0;i<s.size();i++){
            if(rec.find(s[i]) == rec.end()){
                
                rec[s[i]] = i+1;
                
            } else {
                rec[s[i]] = -1;
            }
            // cout<<s[i]<<" "<<rec[s[i]]<<endl;
        }

        for(int i=0;i<s.size(); i++){
            if(rec[s[i]] != -1){
                return i;
            }
        }

    return -1;

    }
};
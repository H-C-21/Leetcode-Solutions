class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }

    unordered_map<char, char> record1;
    unordered_map<char,bool> used;
        
    for(int i=0;i<s.size(); i++){
        if((record1.find(s[i]) == record1.end()) && used.find(t[i]) == used.end()){
            record1[s[i]] = t[i];
            used[t[i]] = true;
            
        } else {
            if(record1[s[i]] != t[i]){
                return false;
            }
        }
    }

    return true;


    }
};
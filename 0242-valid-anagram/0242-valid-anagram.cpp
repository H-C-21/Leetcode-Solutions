//Simple hash count soln
class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if(s==t){
            return true;
        }
        if(s.size() != t.size()){
            return false;
        }
        
        std::unordered_map<char,int> record;
        
        for(int i =0; i<s.size(); i++){
            
            if(record.find(s[i]) == record.end()){
                // record.insert(make_pair(s[i],0))  
                record[s[i]]=0;
            }
            
            
            if(record.find(t[i]) == record.end()){
                // record.insert(make_pair(s[i],0))  
                record[t[i]]=0;
            }
            
            record[s[i]]++;
            record[t[i]]--;
            
        }
        
        for(char i = 'a'; i<'z'; i++){
            if((record.find(i) != record.end()) && record[i] != 0){
                return false;
            }
        }
        
        return true;
        
        
        
        
    }
};
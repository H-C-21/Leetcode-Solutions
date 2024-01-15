class Solution {
public:
    int beautySum(string s) {
       
    if(s.size() < 3){
        return 0;
    }
        
        long count=0;
        
        for(int i=0; i<s.size(); i++){
            map<char,int> freq;
      
            for(int j=i; j<s.size(); j++){
                freq[s[j]]++;
               
                int most = 0;
                int least = INT_MAX;
                    
                if(freq.size() >= 2){
                 for (auto it = freq.begin(); it != freq.end(); it++) {
                        least = min(least,it->second); 
                        most = max(most,it->second); 
                    }
                
                
                    
                    count += (most-least);
                }
                
                
            }
        }
        
        return count;
        
        
        
    }
};
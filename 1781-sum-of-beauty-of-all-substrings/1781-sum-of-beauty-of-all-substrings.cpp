class Solution {
public:
    int beautySum(string s) {
       
    if(s.size() < 3){
        return 0;
    }
        
        long long count=0;
        
        for(int i=0; i<s.size(); i++){
            map<char,int> freq;
      
            for(int j=i; j<s.size(); j++){
                freq[s[j]]++;
               
                int most = INT_MIN;
                int least = INT_MAX;
                    
                if(freq.size() < 2){
                    
                } else{
                 for (auto it = freq.begin(); it != freq.end(); it++) {
                        least = min(least,it->second); // Update the minimum frequency
                        most = max(most,it->second); // Update the maximum frequency
                    }
                
                
                    
                    count += (most-least);
                }
                
                
            }
        }
        
        return count;
        
        
        
    }
};
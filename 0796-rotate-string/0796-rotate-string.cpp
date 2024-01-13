//2-Pointer Approach

#include <string.h>  
class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s==goal){
            return true;
        }
        
        if(s.size() != goal.size()){
            return false;
        }
        
        int i =0;
        int j =0;
        int size= s.size();
        string compare = goal+goal;
        int dsize = compare.size();
        
            while(i<dsize){
            
            if(compare[i] == s[j]){
                j++;
                i++;
                if(j==size){
                return true;
                }
            } else {
                if(j!=0){
                    i=i-j+1;
                    j=0;
                } else {
                    i++;
                }
            }

            // i++;
            std::cout<<j;
 
            }
            
            
        std::cout<<j;
        return false;

    }
};
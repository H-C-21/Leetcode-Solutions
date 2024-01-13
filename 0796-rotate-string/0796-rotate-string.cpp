//checking and rotating approach

#include <string.h>  
class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s==goal){
            return true;
        }
        int size = s.length();
        for(int i=0;i<size;i++){
            s += s[0];
            s.erase(s.begin());
            
            if(s==goal){
                return true;
            }

        }

        return false;

    }
};
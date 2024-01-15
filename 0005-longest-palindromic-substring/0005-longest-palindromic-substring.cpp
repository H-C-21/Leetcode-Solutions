class Solution {
public:
    
    string expand(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right-left-1);
    }
    
    string longestPalindrome(string s) {
            string odd;
            string even;
            string maxt = "";
            if(s.size() < 2){
                return s;
            }
        for(int i=0; i<s.size()-1;i++){
            odd = expand(s,i,i+1);
            even = expand(s,i,i);
            
            if(odd.size()>maxt.size()){
                maxt = odd;
            }
            if(even.size()>maxt.size()){
                maxt = even;
            }
            
        }
        
        return maxt;
        
    }
};
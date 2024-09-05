class Solution {
public:
    int strStr(string haystack, string needle) {
        int s = needle.size();
        int n = haystack.size();
        for(int i = 0; i<=n-s; i++){
            // string curr = haystack.substring()
            if(needle == haystack.substr(i,s)){
                return i;
            }
        }
        return -1;
    }
};
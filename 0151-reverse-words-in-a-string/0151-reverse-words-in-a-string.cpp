class Solution {
public:
    string reverseWords(string s) {
        
        int size = s.size();
        string p = "";
        vector<string> rec;
        for(int i=0 ;i<size;i++){
            if(s[i] != ' '){
                p += s[i];
            } else {
                if(p!=""){
                rec.push_back(p);
                }
                p = "";
            }
        }
        rec.push_back(p);
        
        string ans = "";
        while(rec.size()!= 0){
                string word =  rec.back();
                ans += word;
                rec.pop_back();
                if(rec.size() != 0){
                    // cout<<word;
                    if(word != ""){
                    ans += " ";
                    }
                }
        }
        
        
        
        
        return ans;
        
    }
};
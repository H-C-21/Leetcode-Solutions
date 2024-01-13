class Solution {
public:
    string frequencySort(string s) {
        // int arr[26] = {0};
        unordered_map<char,int> hash;
        
        for(int i =0;i<s.size(); i++){
            
            if(hash.find(s[i]) == hash.end()){
                hash[s[i]] = 0;
            }
            
            hash[s[i]]++;
            
        }
        
        
        std::vector<std::pair<char,int>> newhash(hash.begin(), hash.end());
        std::sort(newhash.begin(), newhash.end(),  [](const auto& a, const auto& b) {
        return a.second > b.second;
        });
            
        string output;
        for(const auto& pair : newhash){
            int num2 = pair.second;
            while(num2 != 0){
                output += pair.first;
                num2--;
            }
        }
        return output;
    }
};
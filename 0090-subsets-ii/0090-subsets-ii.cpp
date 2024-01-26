class Solution {
public:
    
    void helper(set<vector<int>>& ans, vector<int>& nums, vector<int> curr, int index){
        
        if(index == nums.size()){
            sort(curr.begin(),curr.end());
            ans.insert(curr);
            return ;
        }
        
        helper(ans,nums,curr,index+1);
        curr.push_back(nums[index]);
        helper(ans,nums,curr,index+1);
    
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        std::set<vector<int>> ans;
        vector<int> start;
        helper(ans,nums,start,0);
        
        vector<vector<int>> myVector(ans.begin(), ans.end());
        return myVector;
        
    }
};
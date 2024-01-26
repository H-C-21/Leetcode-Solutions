class Solution {
public:
    
    void helper(vector<vector<int>>& ans, vector<int>& nums, vector<int> curr, int index){
        
        if(index == nums.size()){
            // sort(curr.begin(),curr.end());
            ans.push_back(curr);
            return ;
        }
        
          if(curr.size() != 0 && curr[curr.size()-1] == nums[index]){
            curr.push_back(nums[index]);
            helper(ans,nums,curr,index+1);
        } else {
            helper(ans,nums,curr,index+1);
            curr.push_back(nums[index]);
            helper(ans,nums,curr,index+1);
        }
    
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
       vector<vector<int>> ans;
        vector<int> start;
        sort(nums.begin(),nums.end());
        helper(ans,nums,start,0);
        
        return ans;
        
    }
};
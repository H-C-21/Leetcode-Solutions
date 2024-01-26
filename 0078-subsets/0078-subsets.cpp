class Solution {
public:
    
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int> curr, int index){
        
        
        if(index == nums.size()){
            ans.push_back(curr);
            return ;
        }
        
        int temp = nums[index];
        index++;
        helper(nums, ans, curr,index);
        curr.push_back(temp);
        helper(nums,ans,curr,index);

    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ex;
        
        helper(nums,ans,ex,0);
        return ans;
        
    }
};
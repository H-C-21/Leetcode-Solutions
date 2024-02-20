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

        
        int k = nums.size();
        
        int rang = pow(2,k);
        
        for(int i = 0; i<rang; i++){
            int curr = i;
            vector<int> ex;
            for(int j = 0; j<k; j++){
                if(1<<j & curr){
                    ex.push_back(nums[j]);
                }
            }
            ans.push_back(ex);
            ex.clear();
        }
        return ans;
    }   
};
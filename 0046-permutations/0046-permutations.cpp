class Solution {
public:

    void helper(vector<vector<int>>& ans,vector<int> nums, int index){
        if(nums.size() == index){
            ans.push_back(nums);
            return ;
        }
        

            for(int i = index; i<nums.size(); i++){
                iter_swap(nums.begin()+index,nums.begin()+i);
                helper(ans,nums,index+1);
                iter_swap(nums.begin()+index,nums.begin()+i);
            }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
      
        helper(ans,nums,0);
        // sort(ans.begin(),ans.end());
        return ans;

    }



    

};
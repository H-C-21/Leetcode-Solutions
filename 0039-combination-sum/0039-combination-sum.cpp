class Solution {
public:

    void helper(vector<int>& c, int target, int index, int sum, vector<int> curr, vector<vector<int>>& ans){
        if(sum == target){
            ans.push_back(curr);
            return ;
        } 

        if(sum > target){
            return ;
        }

        if(index == c.size()){
            return ;
        }

        helper(c,target,index+1,sum,curr,ans);
        curr.push_back(c[index]);
        helper(c,target,index,sum+c[index],curr,ans);
        

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(candidates,target,0,0,curr,ans);
        return ans;
    }
};
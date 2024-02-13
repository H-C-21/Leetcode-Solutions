class Solution {
public:
    vector<vector<int>> ans;

    void helper(int index,int n, int k,vector<int>& curr){
        if(curr.size() == (k)){
            ans.push_back(curr);
            return ;
        }

        if(index > n){
            return ;
        }

        curr.push_back(index);
        helper(index+1,n,k,curr);
        curr.pop_back();
        helper(index+1,n,k,curr);

    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> cold;
        helper(1,n,k,cold);

        return ans;

    }
};
class Solution {
public:
    
    
    void helper(vector<vector<int>>& ans, vector<int>& curr, int k,int n, int sum, int ind){
        
        if(sum == n && curr.size() == k){
            ans.push_back(curr);
            return ;
        } 
        
        if( sum > n || curr.size() == k){
            return ;
        
        }
        
        if(ind > 9){
            return ;
        }
        
        curr.push_back(ind);
        helper(ans,curr,k,n,sum+ind,ind+1);
        curr.pop_back();
        helper(ans,curr,k,n,sum,ind+1);  
        
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<vector<int>> ans;
        if(n>45){
            return ans;
        }
        
       
        vector<int> current;
        int sum = 0;
        helper(ans,current,k,n,0,1);
        
        return ans;
        
       
        
    }
};
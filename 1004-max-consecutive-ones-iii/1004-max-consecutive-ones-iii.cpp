class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if(nums.size() == 0){
            return 0;
        }

        int zero = 0;
        int n = nums.size();
        int left = 0;
        int ans = -1;

        for(int i=0; i<n; i++){

            if(nums[i] == 0){
                if(zero<k){
                zero++;
                } else {
                    while(nums[left] != 0){
                        left++;
                    }
                    left++;
                    // zero--;
                }
            }
            // cout<<left;
            ans = max(ans,i-left+1);

        
        }

        return ans;


        // return max1;
    }
};
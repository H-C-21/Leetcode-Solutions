class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int curr_max = -1;
        int left = 0;
        int count = 0;
        long long ans = 0;
        int n = nums.size();

        for(int i =0 ; i<n; i++){
            curr_max = max(curr_max,nums[i]);
        }

        for(int i=0; i<n; i++){
            if(nums[i] == curr_max){
                count++;
            } 

            while(left<=i && count == k){
                ans += n-i;
                if(nums[left] == curr_max){
                    count--;
                }
                    left++;
   
            }   
            



        }

        return ans;
    }
};
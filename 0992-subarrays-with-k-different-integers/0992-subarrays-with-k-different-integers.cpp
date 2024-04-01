class Solution {
public:

    int atMostK(vector<int>& nums, int k){
        if(k<0){return 0;}
        unordered_map<int,int> rec;
        int ans=0;
        
        int unique = 0;
        int left =  0;
        
        for(int i = 0; i<nums.size(); i++){
            rec[nums[i]]++;

            if(rec[nums[i]] == 1){
                unique++;
            }
            
            while(unique > k){
                rec[nums[left]]--;
                if(rec[nums[left]] == 0){
                    unique--;
                }
                left++;
            }

            // if(unique == k){
                ans += i-left+1;
                if(i==0){cout<<ans<<" ";}
                
            // }
        }
        return ans;
    }




    int subarraysWithKDistinct(vector<int>& nums, int k) {
      
        int s1 = atMostK(nums,k-1);
        int s2 = atMostK(nums,k);
        
        return (s2-s1);

   
        
        }
    
};
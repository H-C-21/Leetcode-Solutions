class Solution {
public:

//     int recursive(long long art){
        
//     }
const long long MOD = 1e9 + 7; // 10^9 + 7


    long long calcPower(long long x, long long y){

        long long res = 1;
        x = x%MOD;
         if(x==1){
            return 1;
        }
        if(y==0){
            return 1;
        }
       

        if(y%2 == 0){
            return calcPower((x*x)%MOD, y/2)%MOD;
        } else {
            return x*calcPower(x,y-1)%MOD;
        }
        
    }


    
    int countGoodNumbers(long long n) {
            long long even = n/2;
            long long odd = (n+1)/2;

            long long ans = ((calcPower(4,even)%MOD)*(calcPower(5,odd)%MOD))%MOD;
            return int(ans);
    }  
};  
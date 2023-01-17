class Solution {
public:
    long long int reverse(long long int  x) {
        bool ok = 1;
         if(x < 0) ok = -1;
         long long int  ans = 0;
        while(x){
             long long int  rem =  x % 10;
            ans *= 10;
            ans += rem;
            x/=10;
            
            
        }
          if(ans > ((1LL << 31) - 1) or ans < -1*(1LL<<31)) return 0;
        ans *= ok;
        return ans;
    }
};

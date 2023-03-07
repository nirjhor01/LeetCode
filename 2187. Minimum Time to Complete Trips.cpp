#define ll long long
class Solution {
public:
    long long minimumTime(vector<int>& time, int tot) {
        ll high = 1LL* *max_element(time.begin(),time.end()) * tot;
        ll low = 1;
        ll ans = 0;
        ll res = 1;
        while(low <= high){
            ll mid = (low + high) >> 1LL;
            ll ans = 0;
            for(auto i: time) ans += 1LL*(mid / i);
            if(ans >= tot){
                res = mid;
                high = mid - 1;

            }
            else low  = mid + 1;

        }
        return res;
    }
};

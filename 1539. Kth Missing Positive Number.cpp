class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 1;
        int high = 2 * 1000;
        map<int,int>mp;
        for(auto i:arr) mp[i] = 1; 
        auto func = [&](int x){
            int ans = 0;
            for(int i = 1; i <= x; ++i){
                if(!mp[i]) ans++;
            }
            return ans;
        };
        int res = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int get = func(mid);
            if(get >= k){
                if(get == k) res = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return res;
    }
};

class Solution {
public:
    int minimumCardPickup(vector<int>& c) {
        int len = c.size();
        std::map<int, int> mp;
        int k = 0;
        int ans = 1e5 + 1;
        for(int i = 0; i < len; ++i){
            mp[c[i]]++;
            if(mp[c[i]] == 2){
                for(int j = k; j < i; ++j){
                    mp[c[j]]--;
                    if(c[j] == c[i]){
                        ans = min(ans, i - j + 1);
                        k = j + 1;
                        break;
                    }
                }
            }
        }
        if(ans == 1e5 + 1) return -1;
        return ans;
    }
};

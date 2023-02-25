class Solution {
public:
    int lengthOfLongestSubstring(string c) {
        int len = c.size();
        if(len == 0) return 0;
        if(len > 1){
            if(c[len - 1] != c[len - 2]){
                c += c[len - 1];
                len++;
            }
        }
        std::map<int, int> mp;
        int k = 0;
        int ans = 1;
        for(int i = 0; i < len; ++i){
            mp[c[i]]++;
            if(mp[c[i]] == 2){
                ans = max(ans, i - k);
                for(int j = k; j < i; ++j){
                    mp[c[j]]--;
                    if(c[j] == c[i]){
                        k = j + 1;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};

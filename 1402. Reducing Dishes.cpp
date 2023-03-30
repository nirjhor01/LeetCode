class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        int cur = 0;
        int mx = 0;
        int ans = 0;
        sort(satisfaction.begin(), satisfaction.end());
        for(int i = n - 1; i >= 0; i--){
            cur += satisfaction[i];
            ans += cur;
            mx = max(mx , ans);
        }
        return mx;
    }
};

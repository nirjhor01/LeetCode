class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), 0);
        int len = nums.size();
        for(int i = nums.size() - 1; i >= 0; i--){
            int a = 0;
            int b = 0;
            if(i + 2 < len) a = dp[i + 2];
            if(i + 3 < len) b = dp[i + 3];
            dp[i] = max(a, b) + nums[i];

        }
        sort(dp.begin(), dp.end());
        return dp[dp.size() - 1];
        
    }
};

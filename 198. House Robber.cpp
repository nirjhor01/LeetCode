class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), 0);
        int len = nums.size();
       if(len - 1 >= 0) dp[len - 1] = nums[len - 1];
        if(len - 2 >= 0) dp[len - 2] = nums[len - 2];
        for(int i = nums.size() - 3; i >= 0; i--){
            int a = 0;
            int b = 0;
            a = dp[i + 2];
            if(i + 3 < len) b = dp[i + 3];
            dp[i] = max(a, b) + nums[i];

        }
        sort(dp.begin(), dp.end());
        return dp[dp.size() - 1];
        
    }
};

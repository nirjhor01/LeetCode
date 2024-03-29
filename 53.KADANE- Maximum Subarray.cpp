class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        int sum = 0;
        for(auto i: nums){
            sum += i;
            mx = max(sum, mx);
            if(sum < 0) sum = 0;
            
        }
        return mx;
    }
};

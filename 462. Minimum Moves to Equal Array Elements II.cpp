class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(),nums.end());
        int median = nums[len / 2];
        int ans = 0;
        for(auto i: nums) ans += abs(i - median);
        return ans;
        
    }
};

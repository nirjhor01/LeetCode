#KADAN's algo
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = 0;
        int sum = 0;
        int neg = 0;
        for(auto i: nums){
            neg +=(i < 0);
            sum += i;
            if(sum < 0) sum = 0;
            mx = max(sum, mx);
        }
        if(neg == nums.size()){
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        return mx;
    }
};

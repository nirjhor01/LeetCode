class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int len  = nums.size();
        sort(nums.begin(),nums.end());
        int low = 1;
        int high = len;
        int mx = 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int cur = 1;
            for(int i  = 1; i < len; ++i){
                if(nums[i] == nums[i - 1]) continue;
                else if(abs(nums[i] - nums[i - 1]) == 1) cur++;
                else{
                    if(cur >= mid) break;
                    cur = 1;
                }
            }
            if(cur >= mid){
                low = mid + 1;
                mx = max(mx, cur);
            }
            else{
                high = mid - 1;
            }
        }
        return mx;
    }
};

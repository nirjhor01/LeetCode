class Solution {
public:
    int func(vector<int>nums, int len){
        int has = 0;
        for(int i = 0; i < len; ++i){
            if(nums[i] == 1){
                has = 1; break;
            }
        }
        if(has == 0) return 1;

        for(int i = 0; i < len; ++i){
            if(nums[i] <= 0 or nums[i] > len) nums[i] = 1;
        }
        for(int i = 0; i < len; ++i){
            nums[(nums[i] - 1) % len] += len;
        }
        for(int i = 0; i < len; ++i){
              if(nums[i] <= len) return i + 1;
        }
        return len + 1;
    }
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        return func(nums, len);
        
    }
};

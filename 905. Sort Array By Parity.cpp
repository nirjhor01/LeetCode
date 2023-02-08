class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size();
        int j = 0;
        map<int,int>mp;
        for(int i = 0; i < len; ++i){
            if(nums[i] % 2 == 0){
                while(j < i){
                    if(nums[j] % 2 == 1 and mp[j] != -1){
                        swap(nums[i],nums[j]);
                        mp[j] = -1;
                        break;
                    }
                    j++;
                }
            }
        }
        return nums;
    }
};

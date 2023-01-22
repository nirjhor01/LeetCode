class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f_pos = -1;
        int l_pos = -1;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == target){
            l_pos = i;
            if(f_pos == -1){
                f_pos = i;
            }
            }
        }
        return{f_pos,l_pos};
    }
};

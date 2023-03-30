class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int possitive_index = 0;
        for(int i = 0; i < n; ++i){
            if(nums[i]){
                nums[possitive_index++] = nums[i]; // make all pos nums set togather from staring
            }
        }
        while(possitive_index< n){
            nums[possitive_index++] = 0;
        }

    }
};





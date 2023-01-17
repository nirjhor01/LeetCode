class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vs;
        vs = nums;
        sort(nums.begin(),nums.end());
        int n = (int)nums.size();
        int low = 0;
        int high = n - 1;
        int x = -1;
        int y = -1;
        while(low < high){
            if(nums[low] + nums[high] > target){
                high--;
            }
            else{
                if(nums[low] + nums[high] == target){
                    x = nums[low];
                    y = nums[high];
                }
                low++;
            }
        }
        int a = -1, b = -1;
        for(int i = 0; i < vs.size(); ++i){
            if(vs[i] == x and a == -1){
                a = i;
                vs[i] = -1;
            }
            if(vs[i] == y and b == -1){
                b = i;
                vs[i] = -1;
            }
        }
        int xx = min(a, b);
        int yy = max(a, b);
        return{xx, yy};
        
        
    }
};

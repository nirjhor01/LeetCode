class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        int p = 1;
        int mx = (-1)*1e9;
        for(int i = 0; i < nums.size(); i++){
            p *= nums[i];
            mx =  max(mx, p);
            if(p == 0) p = 1;
        }
        //cout << mx << '\n';
        p = 1;
         for(int i = nums.size() - 1; i >= 0; i--){
            p *= nums[i];
            mx =  max(mx, p);
            if(p == 0) p = 1;
        }
        return mx;
    }
};

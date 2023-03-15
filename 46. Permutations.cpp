class Solution {
public:
void perm(int sz, vector<int>ds, vector<vector<int>>&ans, vector<int>nums, int mp[]){
    if(ds.size() == sz){
        ans.push_back(ds);
        return;
    }
    for(int i = 0; i < sz; i++){
        if(mp[i] == 0){
            ds.push_back(nums[i]);
            mp[i] = 1;
            perm(sz, ds, ans, nums, mp);
            mp[i] = 0;
            ds.pop_back();
    }
}
}
    vector<vector<int>> permute(vector<int>& nums) {
        int sz = nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        int mp[sz + 1];
        for(int i = 0; i < sz; ++i) mp[i] = 0;
        perm(sz, ds, ans, nums, mp);
        return ans;
    }
};

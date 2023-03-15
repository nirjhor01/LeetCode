class Solution {
public:
void recur(int ind, vector<int>ds, vector<vector<int>>&ans, vector<int>candidates, int target){
    if(ind == candidates.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    if(candidates[ind] <= target){
        ds.push_back(candidates[ind]);
        recur(ind, ds, ans, candidates, target - candidates[ind]);
        ds.pop_back();
    }
     recur(ind + 1, ds, ans, candidates, target);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        recur(0, ds, ans, candidates, target);
        return ans;

        
    }
};

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int dp[m + 1][n + 1];
        for(int i = 0; i < m; ++i) 
        for(int j = 0; j < n; ++j) dp[i][j] = 0;
        dp[0][0] = grid[0][0];

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(i == 0 and j == 0) continue;
                int a = 1e6;
                if(i - 1 >= 0 ){
                    a =  min(a, dp[i - 1][j] + grid[i][j]);
                }
           
                 if(j - 1 >= 0){
                    a =  min(a, dp[i][j - 1] + grid[i][j]);
                }
               
                dp[i][j] = a;
            }
        }
        return dp[m - 1][n - 1];
    }
};

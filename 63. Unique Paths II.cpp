class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int r = ob.size();
        int c = ob[0].size();
        int dp[r + 1][c + 1];
        for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
        dp[i][j] = 0;
        if(ob[0][0] == 0) dp[0][0] = 1;
        int cnt = 0;
        int ok = 0;
        for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j){
            if(i + j == 0) continue;
            if(ob[i][j] == 1) continue;
         if(i - 1 >= 0 and ob[i - 1][j] == 0){
             dp[i][j] += dp[i - 1][j];
         }
          if(j - 1 >= 0 and ob[i][j] == 0){
             dp[i][j] += dp[i][j - 1];
         }
        }
        return dp[r - 1][c - 1];

    }
};

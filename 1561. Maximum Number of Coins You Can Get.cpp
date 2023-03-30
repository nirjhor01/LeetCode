class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int low = 0;
        int high = n - 1;
        int ans = 0;
        while(low < high){
            low++;
            high--;
            ans += piles[high];
            high--;
        }
        return ans;
    }
};

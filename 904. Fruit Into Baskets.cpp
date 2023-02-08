class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int len = fruits.size();
        int mx = 1;
        unordered_map<int,int>mp;
        int j = 0;
        for(int i = 0; i < len; ++i){
        	mp[fruits[i]]++;
            while(mp.size() > 2){
                mp[fruits[j]]--;
                if(mp[fruits[j]] == 0) mp.erase(fruits[j]);
                j++;
            }
            mx = max(mx, i - j + 1);
        }
        return mx;
    }
};

class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int j = 0;
        unordered_map<int,int>mp;
        int max_freq = 0;
        int max_length = 0;
        while(j < s.size()){
            mp[s[j]]++;
            max_freq = max(mp[s[j]], max_freq);
            if(j - i + 1 - max_freq > k){
                mp[s[i]]--;
                i++;
            }
            max_length = max(max_length, j - i + 1);
            j++;
        }
        return max_length;

        
    }
};

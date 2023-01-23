class Solution {
public:
    string frequencySort(string s) {
    	std::vector<pair<int,char>> ps;
    	map<char,int>mp;
    	for(auto i: s) mp[i]++;
    		for(auto i:s){
                if(mp[i] == -1) continue;
    			ps.push_back({mp[i],i});
                mp[i] = -1;
    		}
        sort(ps.begin(),ps.end());
        reverse(ps.begin(),ps.end());
        string ans = "";
        for(auto i: ps){
        	string t = string(i.first, i.second);
            ans += t;
        }
        return ans;
    }
};

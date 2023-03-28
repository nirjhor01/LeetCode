_______________
 // SOLUTION-01// (BINARY SEARCH)
_______________
    
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int len  = nums.size();
        sort(nums.begin(),nums.end());
        int low = 1;
        int high = len;
        int mx = 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int cur = 1;
            for(int i  = 1; i < len; ++i){
                if(nums[i] == nums[i - 1]) continue;
                else if(abs(nums[i] - nums[i - 1]) == 1) cur++;
                else{
                    if(cur >= mid) break;
                    cur = 1;
                }
            }
            if(cur >= mid){
                low = mid + 1;
                mx = max(mx, cur);
            }
            else{
                high = mid - 1;
            }
        }
        return mx;
    }
};

_______________
// SOLUTION-02 - DSU(DISJOINT SET UNION)
_______________
    
    class Solution {
public:
    unordered_map<int,int>par,sz;
    void make_sets(int v){
        par[v] = v;
        sz[v] = 1;
    }
    int find_sets(int u){
        if(par[u] == u) return u;
        return par[u] = find_sets(par[u]);
    }
    void union_sets(int a, int b){
        a = find_sets(a);
        b = find_sets(b);
       // cout <<"check-a = " << a << " check-b = " << b<<'\n';
        if(a != b){
            if(sz[a] < sz[b]) swap(a, b);
                sz[a] += sz[b];
                par[b] = a;
            
        }
    }
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_map<int,int>mp;
        int len = nums.size();
        for(int i = 0; i < len; ++i){
            make_sets(nums[i]);
        }
        for(auto i: nums) mp[i] = 1;

        for(auto i: nums){
            if(mp[i + 1] == 1){
                union_sets(i, i + 1);
            }
        }
        int mx = 0;
        for(auto i: nums){
            mx = max(mx, sz[i]);
        }
        return mx;
    }
};

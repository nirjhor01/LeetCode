
class Solution {
public:
    int maxDistance(vector<int>& p, int m) {
    	sort(p.begin(),p.end());
    	int low = 1;
    	int high = p[p.size() - 1];
    	
    	auto func = [&](int mids){
    		int s = p[0];
    		int ans = 1;
    		for(int i = 0; i < p.size(); ++i){
    			if(p[i] - s >= mids){
    				ans++;
    				s = p[i];
    			}
    		}
    		return ans;
    	};
    	
    	int res  = -1;
    	while(low <= high){
    		int mid = low + (high - low) / 2;
    		int get = func(mid);
    		if(get >= m){
    			low  = mid + 1;
    			res  = max(res, mid);
    		}
    		else high = mid - 1;
    	}
    	return res;
    	
        
    }
};

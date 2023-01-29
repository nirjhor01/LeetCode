class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    	int len = nums.size();
    	vector<int>num;
    	for(auto i: nums) num.push_back(i);
    		for(int i=0;i + 1 < len;i++) num.push_back(num[i]);
    		map<int, int> mp;
    		stack<int>st;
    		for(int i = 0; i < num.size(); ++i){
    			while(!st.empty() && num[st.top()] < num[i]){
    				mp[st.top()] = num[i];
    				st.pop();
    			}
                st.push(i);
    		}
            while(!st.empty()){
                mp[st.top()] = -1;
                st.pop();
            }
        
    		vector<int>ans;
    		for(int i = 0; i < len; ++i){
    			ans.push_back(mp[i]);
    		}
    		return ans;
        
    }
};

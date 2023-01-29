class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        stack<int>st;
        map<int,int>mp;
        for(int i = 0; i < len2; i++){
        	while(!st.empty() && st.top() < nums2[i]){
        		mp[st.top()] = nums2[i];
        		st.pop();
        	}
        	st.push(nums2[i]);
        }
        while(!st.empty()){
        	mp[st.top()] = -1;
        	st.pop();
        }
        vector<int>ans;
        for(int i = 0; i < len1; i++){
        	ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};

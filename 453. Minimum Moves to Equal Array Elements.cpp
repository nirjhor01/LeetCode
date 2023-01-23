class Solution {
public:
    int minMoves(vector<int>& nums) {
    	int sum = 0;
    	int mn = *min_element(nums.begin(),nums.end());
    	for(auto i: nums) sum += i - mn;
    	return sum; 
    }
};


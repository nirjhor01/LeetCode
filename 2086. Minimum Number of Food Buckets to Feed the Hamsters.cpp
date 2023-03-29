class Solution {
public:
    int minimumBuckets(string ham) {
        int ans = 0;
        int n = ham.size();
        for(int i = 0; i < ham.size(); ++i){
            if(ham[i] == 'H'){
                if(i + 1 < n && ham[i + 1] == '.'){
                ans++;
                if(i + 2 < n && ham[i + 2] == 'H') ham[i + 2] ='x';
                }
                else if(i - 1 >= 0 and ham[i-1] == '.'){
                    ans++;
                }
                else return -1;
            }
            //H...H.H..HH

        }
        return ans;
        
    }
};

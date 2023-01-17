class Solution {
public:
    int strStr(string hay, string need) {
        int ans = -1;
        auto func = [&](int ind){
            int index = 0;
            for(int i = ind; i < hay.size(); ++i){
                cout << index << ' ' << i << '\n';
                if(hay[i] != need[index]){
                    return -1;
                }
                else index++;
                if(index == need.size()) return 1;
            }
            if(index == need.size()) return 1;
            return -1;
        };

        for(int i = 0; i < hay.size(); ++i){
               if(hay[i] == need[0]){
                   int get = func(i);
                   if(get == 1){
                       return i;
                   }
               }
        }
        return ans;
        
    }
};

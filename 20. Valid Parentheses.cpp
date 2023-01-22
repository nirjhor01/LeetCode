class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        stack<char>st;
        for(int i = 0; i < len; ++i){
            if(st.empty()) st.push(s[i]);
            else{
                char top = st.top();
                if(top == '(' and s[i] == ')') st.pop();
                else if(top == '{' and s[i] == '}') st.pop();
                else if(top == '[' and s[i] == ']') st.pop();
                else st.push(s[i]);
            }
        }
        if((int)st.size()) return false;
        else return true;
        
    }
};

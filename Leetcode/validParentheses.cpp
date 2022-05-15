class Solution {
public:
    bool isValid(string s) {
        map<char, char> m;
        m[']'] = '[';
        m[')'] = '(';
        m['}'] = '{';
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() && m[s[i]] == st.top()){
                st.pop();
            }else {
                st.push(s[i]);
            }
        }
        return st.size() == 0;
    }
};

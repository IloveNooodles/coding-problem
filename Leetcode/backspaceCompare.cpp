class Solution {
public:
    stack<char> removeBackspace(string t){
        stack<char> s;
        int size = t.size();
        for(int i = 0; i < size; i++){
            if(t[i] != '#') s.push(t[i]);
            if(!s.empty() && t[i] == '#') s.pop();
        }
        return s;
    }

    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        s1 = removeBackspace(s);
        s2 = removeBackspace(t);
        while(!s1.empty() && !s2.empty()){
            if(s1.top() != s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        return s1.empty() == s2.empty();
    }
};

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        
        for(char &c: s){
            if(!s1.empty() && c == '#') {
                s1.pop();
                continue;
            }
            
            if(s1.empty() && c == '#') continue;
            
            s1.push(c);
        }
        
        for(char &c: t){
            if(!s2.empty() && c == '#') {
                s2.pop();
                continue;
            }
            
            if(s2.empty() && c == '#') continue;
            
            s2.push(c);
        }
        
        if(s1.size() != s2.size()) return false;
        
        int stackSize = s1.size();
        for(int i = 0; i < stackSize; i++){
            if(s1.top() != s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        return true;
    }
};

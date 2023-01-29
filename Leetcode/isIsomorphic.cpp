class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sSize = s.size();
        int tSize = t.size();
        if(sSize != tSize) return false;
        
        map<char, char> m;
        map<char, bool> seen;
        for(int i = 0; i < sSize; i++){
            if(seen.find(t[i]) == seen.end()){
                m[s[i]] = t[i];
                seen[t[i]] = true;
            } else if(m.find(s[i]) != m.end()) continue;
            else m[s[i]] = '!';
        }

        for(int i = 0; i < sSize; i++){
            if(t[i] != m[s[i]]) return false;
        }

        return true;
    }
};

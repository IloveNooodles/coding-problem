class Solution {
public:
    string toLowerCase(string s) {
        string t = "";
        int size = s.size();
        for (int i = 0; i < size; i++) {
            t += tolower(s[i]);
        }
        return t;
    }
};

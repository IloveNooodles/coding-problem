#include <map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int best = 0, start = 0, size = s.length();
        for (int end = 0; end < size; end++) {
            if (m.find(s[end]) != m.end()) {
                start = max(start, m[s[end]] + 1);
            }
            m[s[end]] = end;
            best = max(end - start + 1, best);
        }
        return best;
    }
};
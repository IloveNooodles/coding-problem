class Solution {
public:
    int minDeletions(string s) {
        int charCount[26] = {0};
        unordered_set<int> seen;
        int res = 0;
        for(char &c : s) charCount[c - 'a']++;
        for(int i = 0; i < 26; i++){
            for(; charCount[i] > 0 && !seen.insert(charCount[i]).second; charCount[i]--) res++;
        }
        return res;
    }
};

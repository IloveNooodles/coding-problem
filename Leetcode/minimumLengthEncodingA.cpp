class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string> s(words.begin(), words.end());
        for (string word: s) {
            for (int i = 1; i < word.size(); i++) {
                s.erase(word.substr(i));
            }            
        }
        
        int res = 0;
        for(string word: s) res += word.size() + 1;
        
        return res;
    }
};

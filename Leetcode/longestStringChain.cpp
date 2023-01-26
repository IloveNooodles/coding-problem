class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int maxLen = 0;
        sort(words.begin(), words.end(), sortString);
        int size = words.size();
        map<string, int> dp;
        for(string word: words) cout << word << " ";
        for (string word : words){
            int wordSize = word.size();
            for(int i = 0; i < wordSize; i++){
                string tempWord = word.substr(0, i) + word.substr(i + 1);
                dp[word] = max(dp[word], dp.count(tempWord) ? dp[tempWord] + 1 : 1);
            }
            maxLen = max(maxLen, dp[word]);
        }
        return maxLen;
    }
    
    static bool sortString(string s1, string s2){
        return s1.size() < s2.size();
    }
};

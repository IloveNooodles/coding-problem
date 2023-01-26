

class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        bool dp[size+1][size + 1];
        int maxLen = 0, startIndex = 0;
        
        for (int i = size - 1; i >= 0; i--){
            for (int j = i; j < size; j++) {
                dp[i][j] = (s[i] == s[j]) && (j - i < 3 || dp[i+1][j-1]);    
            
                if (dp[i][j] && maxLen < j - i + 1) {
                    maxLen = j - i + 1;
                    startIndex = i;
                }
            }
        }
        return s.substr(startIndex, maxLen);
    }
};

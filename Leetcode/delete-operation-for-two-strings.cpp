class Solution {
public:
    int minDistance(string word1, string word2) { 
        /* dp */
        int len_word1 = word1.size();
        int len_word2 = word2.size();
        
        int dp[len_word1 + 1][len_word2 + 1];
        
        /* instantsiate */
        for(int i = 0; i <= len_word1;i++) dp[i][0] = 0;
        for(int i = 0; i <= len_word2;i++) dp[0][i] = 0;
        
        /* bisa di delete word1, atau didelete word2 */
        for (int i = 0; i <= len_word1; i++) {
            for (int j = 0; j <= len_word2; j++) {
                if(i == 0 || j == 0) continue;
                if(word1[i-1] == word2[j-1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return len_word1 + len_word2 - 2 * dp[len_word1][len_word2];    
    }
};

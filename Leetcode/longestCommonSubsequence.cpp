class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int len_text1 = text1.size();
        int len_text2 = text2.size();
        
        /* create dp */
        int dp[len_text1+1][len_text2+1];
        
        for(int i = 0; i <= len_text1; i++) dp[i][0] = 0;
        for(int i = 0; i <= len_text2; i++) dp[0][i] = 0;
        
        for (int i = 0; i <= len_text1; i++){
            for (int j = 0; j <= len_text2; j++) {
                if(i == 0 || j == 0) continue;
                if(text1[i - 1] == text2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[len_text1][len_text2];
    }
};

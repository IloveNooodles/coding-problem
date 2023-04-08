/**
 * @param {string} text1
 * @param {string} text2
 * @return {number}
 */
var longestCommonSubsequence = function(text1, text2) {
    const size1 = text1.length;
    const size2 = text2.length;

    //create array 2d;
    const dp = Array(size1 + 1).fill(0).map(val => Array(size2 + 1).fill(0));
   
    //loop the array
    for(let i = 1; i <= size1; i++){
        for(let j = 1; j <= size2; j++){
            if(text1[i - 1] == text2[j - 1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = Math.max(dp[i - 1][j], dp[i][j-1]);
            }
        }
    }

    return dp[size1][size2];

    //   - a b c d e
    // - 0 0 0 0 0 0
    // b 0 0 0 1 0 0
    // c 0 0 2 0 1 0
    // e 0 1 0 3 0 0
};

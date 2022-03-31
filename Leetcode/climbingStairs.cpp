class Solution {
public:
    long long memo[46];
    int climbStairs(int n) {
        if(n <= 2 && n >= 0){
            memo[n] = n;
            return n;
        }
        if(memo[n-1] && memo[n-2]){
            return memo[n-1] + memo[n-2];
        }
        memo[n-1] = climbStairs(n-1);
        memo[n-2] = climbStairs(n-2);
        memo[n] = memo[n-1] + memo[n-2];
        return memo[n];
    }
};
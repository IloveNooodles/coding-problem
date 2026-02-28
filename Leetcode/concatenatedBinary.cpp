class Solution {
public:
    int concatenatedBinary(int n) {
        long long MOD = 1e9 + 7;
        //n = 1 -> 1 -> 1
        //n = 2 -> 10 -> 1 << 2 + 2
        //n = 3 -> 11 - > 1 1 0 1 1 -> 6 << 2 + 3 = 27
        //n = 4 -> 100 -> 1 1 0 1 1 (1 0 0) 27 * 8 + 4 = 220
        //n = 5 -> 220 ->
        long long arr[100005] = {0};
        arr[1] = 1, arr[2] = 6;
        for(int i = 2; i <= n; i++){
            arr[i] = (((arr[i-1] % MOD) << shift(i)) % MOD) + i;
        }

        return arr[n] % MOD;
    }

    int shift(long long n){
        return log2(n) + 1;
    }
};

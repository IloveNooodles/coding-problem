class Solution {
public:
    long long mod = 1e9 + 7;
    long long binpow(long long a, long long b){
        long long res = 1;
        a %= mod;
        while(b > 0){
            if(b % 2){
                res = res * a % mod;
            }
            a = a * a % mod;	
            b /= 2;
        }
        return res % mod;
    }

    int countGoodNumbers(long long n) {
        return (binpow(5, ceil((double)n/2)) *  binpow(4, n - ceil((double)n/2))) % mod;
    }
};

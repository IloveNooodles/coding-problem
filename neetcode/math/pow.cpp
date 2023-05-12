class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        bool isNegative = false;
        long long nLong = n;

        if(n < 0){
            isNegative = true;
            nLong *= -1;
        }

        while(nLong > 0){
            if(nLong % 2 == 1) {
                res = res * x;
            }
            x *= x;
            nLong /= 2;
        }

        if(isNegative) return 1/res;
        return res;
    }
};

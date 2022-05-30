class Solution {
public:
    bool isHappy(int n) {
        set<int> happySet;
        while(n != 1 && !happySet.count(n)){
            happySet.insert(n);
            n = quadraticSum(n);
        }
        return n == 1;
    }
    
    int quadraticSum(int n){
        int sum = 0;
        while(n){
            int cur = n % 10;
            sum += cur*cur;
            n /= 10;
        }
        return sum;
    }
};

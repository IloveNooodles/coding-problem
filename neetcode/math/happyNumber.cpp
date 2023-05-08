class Solution {
public:
    int calculateDigitSum(int n){
        int sum = 0;
        while(n > 0){
            int temp = n % 10;
            sum += temp * temp;
            n /= 10;
        }

        return sum;
    }
    
    bool isHappy(int n) {
        // Use floyd algorithm to detect cycle
        int slow = n, fast = n;
        int ctr = 0;

        // if slow == same then cycle
        while(ctr == 0 || slow != fast){
            ctr++;
            slow = calculateDigitSum(slow);
            fast = calculateDigitSum(calculateDigitSum(fast));
        }

        if(slow == 1) return true;
        return false;
    } 
};

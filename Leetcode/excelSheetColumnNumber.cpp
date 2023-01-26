class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long size = columnTitle.size();
        long long CONSTANT = 1;
        long long sum = 0;
        for (int i = size - 1; i >= 0; i--) {
            sum += (columnTitle[i] - 'A' + 1) * CONSTANT;
            CONSTANT *= 26;
        }
        return sum;
    }
};

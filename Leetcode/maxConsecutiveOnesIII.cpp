#include <vector>

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int countZero = 0;
        int best = 0;
        int start = 0;
        int size = nums.size();
        for (int end = 0; end < size; end++) {
            if (nums[end] == 0) countZero++;
            //if we found more than 2 zero slide the window
            while(countZero > k) {
                if (nums[start] == 0) countZero--;
                start++;
            }
            best = max(best, end - start + 1);
        }
        return best;
    }
};
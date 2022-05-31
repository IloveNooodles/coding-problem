class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> prefSum;
        int size = arr.size();
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if(i == 0) {
                prefSum.push_back(arr[i]);
                continue;
            }
            prefSum.push_back(prefSum[i-1] + arr[i]);
        }
        
        for (int curSize = 1; curSize <= size; curSize += 2) {
            for (int left = 0; left + curSize - 1 < size; left++) {
                int right = left + curSize - 1;
                int toSub = left - 1 < 0 ? 0 : prefSum[left - 1];
                sum += prefSum[right] - toSub;
            }
        }
        
        return sum;
    }
};

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int size = arr.size();
        int diff = arr[1] - arr[0];
        for (int i = 0; i < size - 1; i++) {
            if (arr[i + 1] - arr[i] != diff) return false;
        }
        return true;
    }
};

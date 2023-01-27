class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivotIdx = -1;
        int size = nums.size();
        vector<int> pref(size, 0);
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += nums[i];
            if(i == 0) pref[i] = nums[i];
            else pref[i] = pref[i - 1] + nums[i];
        }

        //check for arr len 0, 1, 2
        if(size == 1){
            return 0;
        }

        // find the pivot index
        int left, right;
        for(int i = 0; i < size; i++){
            if(i == 0) {
                left = 0;
                right = pref[size - 1] - nums[i];
            }
            else if(i == size - 1) {
                left = pref[size - 1] - nums[i];
                right = 0;
            }
            else {
                // 1, 2, 3, 4, 5
                // 1, 2, |, 4, 5
                left = pref[i] - nums[i];
                right = pref[size - 1] - pref[i];
            }
            if(left == right) return i;
        }
        return pivotIdx;
    }
};

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int size = nums.size();
        int start = -1, minIndex = -1, maxIndex = -1;
        long count = 0;
        for(int i = 0; i < size; i++) {
            if (nums[i] < minK || nums[i] > maxK) start = i;
            if(nums[i] == maxK) maxIndex = i;
            if(nums[i] == minK) minIndex = i;

           int valid = max(0, min(minIndex, maxIndex) - start);
           count += valid;
        }

        return count;
    }
}

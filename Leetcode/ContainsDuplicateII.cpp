class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> duplicateIndex;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if(duplicateIndex.count(nums[i]) && abs(duplicateIndex[nums[i]] - i) <= k){
                return true;
            }
            duplicateIndex[nums[i]] = i;
        }
        return false;
    }
};

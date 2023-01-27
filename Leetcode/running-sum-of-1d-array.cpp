class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector<int> pref(size, 0);
        for(int i = 0; i < size; i++){
            if(i == 0) pref[i] = nums[i];
            else pref[i] = pref[i - 1] + nums[i];
        }
        return pref;
    }
};

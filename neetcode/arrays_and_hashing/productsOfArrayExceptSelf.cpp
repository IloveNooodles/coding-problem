class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int prefProduct = 1, zeroCount = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] == 0) zeroCount++;
            else prefProduct *= nums[i];
        }

        for(int i = 0; i < size; i++){
            int numToAdd = prefProduct;
            if(nums[i] != 0) numToAdd /= nums[i];
            if(zeroCount >= 1) numToAdd = 0;
            if(nums[i] == 0 && zeroCount == 1) numToAdd = prefProduct;
            ans.push_back(numToAdd);
        }

        return ans;
    }
};

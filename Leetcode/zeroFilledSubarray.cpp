class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long size = nums.size();
        long long consZero = 0;
        long long ans = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] == 0) consZero++;
            else {
                ans += (consZero * (consZero+1))/2;
                consZero = 0;
            }
        }

        ans += (consZero * (consZero+1))/2;
        return ans;
    }
};

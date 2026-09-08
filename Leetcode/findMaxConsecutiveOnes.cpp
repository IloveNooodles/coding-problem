class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int longest = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                longest = max(longest, cnt);
                cnt = 0;
            } else {
                cnt++;
            }
        }

        return max(longest, cnt);
    }
};

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int posCount = 0; int negCount = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(nums[i] == 0) return 0;
            else if(nums[i] > 0) posCount++;
            else negCount++;
        }
        return negCount % 2 == 0 ? 1 : -1;
    }
};

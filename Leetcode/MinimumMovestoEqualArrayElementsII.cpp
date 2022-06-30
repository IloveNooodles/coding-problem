typedef long long ll;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        ll diff = nums[size/2];
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += abs(diff - nums[i]);
        }
        return sum;
    }
};

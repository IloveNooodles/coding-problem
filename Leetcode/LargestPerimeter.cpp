class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i = size - 1; i > 1; i--){
            int a = nums[i]; int b = nums[i - 1]; int c = nums[i - 2];
            if(a + b > c && a + c > b && b + c > a) return a + b + c;
        }
        return 0;
    }
};

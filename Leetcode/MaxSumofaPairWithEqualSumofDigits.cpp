class Solution {
public:
    int digit_sum(int num){
        int sum = 0;
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

    int maximumSum(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());

        map<int, vector<int>> m;
        for(int i = 0; i < size; i++){
            int digitSum = digit_sum(nums[i]);
            m[digitSum].push_back(nums[i]);
        }

        int ans = -1;
        for(const auto& [key, val] : m){
            if(val.size() > 1) {
                ans = max(val[0] + val[1], ans);
            }
        }

        return ans;
    }
};

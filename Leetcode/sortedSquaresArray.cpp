class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vi;
        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            vi.push_back(x*x);
        }
        sort(vi.begin(), vi.end());
        return vi;
    }
};

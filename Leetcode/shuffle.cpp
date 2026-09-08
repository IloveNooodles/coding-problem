class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> v(2*n, 0);
       for(int i = 0; i < n; i++){
            v[i*2] = nums[i];
            v[i*2 + 1] = nums[i + n];
       }
       return v;
    }
};

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < size; i++){
            int j = i + 1, k = size - 1;
            while(j < k){
                int total = nums[i] + nums[j] + nums[k];
                if(total == 0){
                    s.insert({nums[i], nums[j], nums[k]});
                    j++; k--;
                }

                if(total > 0){
                    k--;
                }

                if(total < 0){
                    j++;
                }
            }
        }

        for(auto triplets : s) ans.push_back(triplets);
        return ans;
    }
};

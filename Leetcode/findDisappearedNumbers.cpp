class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        multiset<int> ms(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(ms.count(i+1) == 0){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};

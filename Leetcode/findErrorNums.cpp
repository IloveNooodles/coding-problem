class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        multiset<int> s(nums.begin(), nums.end());
        int a = 0, b = 0;
        for(int i = 0; i < nums.size(); i++){
            if(s.count(i+1) == 2) a = i+1;
            if(s.count(i+1) == 0) b = i+1;
        }

        return {a, b};
    }
};

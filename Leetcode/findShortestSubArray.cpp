class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> left, count;
        int size = nums.size();
        int res = 0, maxDegree = 0;
        for(int i = 0 ; i < size; i++) {
            if(!left.count(nums[i])) left[nums[i]] = i;
            
            count[nums[i]]++;
            if(count[nums[i]] > maxDegree){
                maxDegree = count[nums[i]];
                res = i - left[nums[i]] + 1;
                continue;
            }
            
            if(count[nums[i]] == maxDegree){
                res = min(res, i - left[nums[i]] + 1);
            }
            
        }
        return res;
    }
};

class Solution {
public:
    const int MAX_N = 1e5;
    map<int, int> hash;
    int longestConsecutive(vector<int>& nums) {
        
        int maxCount = 0;
        int size = nums.size();

        //insert
        for(int i = 0; i < size; i++){
            hash[nums[i]] = i;
        }

        for(int i = 0; i < size; i++){
            if(hash.find(nums[i] - 1) == hash.end()) //klo gaketemu berarti dia start
            {
                int start = nums[i] + 1; //itung dari i + 1 nya
                while(hash.find(start) != hash.end()){
                    start++;
                }
                maxCount = max(maxCount, start - nums[i]);
            }
        }

        return maxCount;
    }
};

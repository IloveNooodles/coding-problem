class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freqTable;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(freqTable.count(nums[i]) == 0) freqTable[nums[i]] = 1;
            else freqTable[nums[i]]++;
        }

        priority_queue<pair<int,int>> max_heap;
        for(const auto &k: freqTable){
            max_heap.push({k.second, k.first});
        }

        vector<int> ans;
        for(int i = 0; i < k; i++){
            auto [occurence, num] = max_heap.top();
            max_heap.pop();
            ans.push_back(num);
        }

        return ans;
    }
};

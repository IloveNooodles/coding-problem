class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> min_heap;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            min_heap.push(nums[i]);
        }
        int max_counter = 0;
        int counter = 0;
        int cur = 0;
        for(int i = 0; i < size; i++){
            if(i == 0){
                cur = min_heap.top();
                min_heap.pop();
                counter++;
                continue;
            }

            int top = min_heap.top();
            if(top - cur > 1) {
                max_counter = max(max_counter, counter);
                counter = 0;
            }
            if(top == cur) counter--;
            cur = top;
            min_heap.pop();
            counter++;
        }
    
        return max(max_counter, counter);
    }
};

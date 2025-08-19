class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        int size = nums.size();
        int left = 0, right = 0;
        priority_queue<pair<int,int>> pq;

        for(; right < k; right++){
            auto x = make_pair(nums[right], right);
            pq.push(x);
        }
        
        right--;
        while(left < size && right < size){
            auto top = pq.top();
            if(left <= top.second && top.second <= right){
                ans.push_back(top.first);
                left++;
                right++;
                if(right < size) {
                    auto x = make_pair(nums[right], right);
                    pq.push(x);
                }
            } else {
                pq.pop();
            }
        }
        return ans;
    }
};

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        sort(nums.begin(), nums.end(), greater<int>());
        int size = min(k, (int)nums.size());
        for(int i = 0; i < size; i++){
            this->pq.push(nums[i]);
        }
    }
    
    // 1 2 3
    // 1 2 3
    int add(int val) {
        if(this->pq.size() < k){
            pq.push(val);
            return pq.top();
        }
        if(this->pq.top() > val) return this->pq.top();
        pq.pop();
        pq.push(val);
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

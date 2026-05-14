class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i = 0; i < stones.size(); i++){
            pq.push(stones[i]);
        }

        while(pq.size() > 1){
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();

            y = y - x;
            if(y == 0) continue;
            else pq.push(y);
        }

        return pq.empty() ? 0 : pq.top();
    }
};

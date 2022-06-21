class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        /* use priority queue as a min heap so the top will be the smallest diff */
        priority_queue<int> minHeap;
        int size = heights.size() - 1;
        for(int i = 0; i < size; i++){
            int heightDiff = heights[i + 1] - heights[i];
            
            if(heightDiff > 0){
                minHeap.push(-heightDiff);
            }
            
            /* use bricks if ladder are used */
            if(minHeap.size() > ladders){
                bricks += minHeap.top();
                minHeap.pop();
            }
            
            if(bricks < 0) return i;
        }
        
        return size;
    }
};

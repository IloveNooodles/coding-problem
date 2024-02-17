class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int size = heights.size() - 1;
        priority_queue<int> pq; //max heap
        for(int i = 0; i < size; i++){
            int difference = heights[i+1] - heights[i];
            if(difference <= 0) continue;

            bricks -= difference;
            pq.push(difference);

            if(bricks < 0 && ladders <= 0){
                return i;
            }

            if(bricks < 0){
                ladders--;
                bricks += pq.top();
                pq.pop();
            }
        }

        return size;
    }   
};

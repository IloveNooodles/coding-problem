class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<int> meetingCount(n, 0);
        priority_queue<int, vector<int>, greater<int>> unusedRooms;
        priority_queue<pair<long, int>, vector<pair<long,int>>, greater<pair<long, int>>> usedRooms;

        sort(meetings.begin(), meetings.end());
        for(int i = 0; i < n; i++){
            unusedRooms.push(i);
        }

        for(auto meeting : meetings){
            int start = meeting[0], end = meeting[1];
            while(!usedRooms.empty() && usedRooms.top().first <= start){
                int room = usedRooms.top().second;
                usedRooms.pop();
                unusedRooms.push(room);
            }

            if(!unusedRooms.empty()){
                int room = unusedRooms.top();
                unusedRooms.pop();
                usedRooms.push({end, room});
                meetingCount[room]++;
                continue;
            }

            auto [roomAvailTime, room] = usedRooms.top();
            usedRooms.pop();
            usedRooms.push({roomAvailTime + end - start, room});
            meetingCount[room]++;
        }

        int maxIdx = 0;
        for(int i = 0; i < n; i++){
            if(meetingCount[maxIdx] < meetingCount[i]){
                maxIdx = i;
            }
        }
        return maxIdx;
    }

    bool compare(const vector<int>& vec1, const vector<int>& vec2){
        return vec1[0] < vec2[0];
    }
};

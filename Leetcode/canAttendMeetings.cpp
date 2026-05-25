/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */


struct customComparison {
    bool operator()(const Interval &a, const Interval &b){
        return a.start < b.start;
    }
};

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), customComparison());
        priority_queue<Interval, vector<Interval>, customComparison> pq;
        for(int i = 0; i < intervals.size(); i++){
            if(pq.empty()){
                pq.push(intervals[i]);
            } else {
                auto top = pq.top();
                if(top.end > intervals[i].start) {
                    return false;
                } else {
                    pq.push(intervals[i]);
                }
            }
        }
        return true;
    }

    // 5, 10
    // 0, 30
};

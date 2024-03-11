class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,double>> ps;
        for(int i = 0; i < n; i++){
            double time = (double)(target - position[i])/speed[i];
            ps.push_back({position[i], time});
        }

        sort(ps.begin(), ps.end());

        stack<double> s;
        for(int i = 0; i < n; i++){
            double curTime = ps[i].second;
            while(!s.empty() && curTime >= s.top()) s.pop();
            s.push(curTime);
        }

        return s.size();

        // sort(ps.begin(), ps.end(), greater<pair<int,double>>());
        // int res = 0;
        // double maxTime = 0.0;
        // for(int i = 0; i < n; i++){
        //     double time = ps[i].second;
        //     if(time > maxTime){
        //         maxTime = time;
        //         res++;
        //     }
        // }

        // return res;
    }
};

// position = position awal -> fleet
// position + speed = position + speed -> fleet
// poisition = poisition awal + speed -> fleet
// (0, 4), (2, 2), (4, 1)
// (4, 1), (2, 2), (0, 4)
// 4 == 2+2 || 4+1 == 2+2 -> 1 fleet
// (2+2)
// (4, 2), (2, 3)
// (6, 2), (5, 3)
// (8, 2), (8, 3)
// (10 - 4)/2 = 3
// (10 - 2)/3 = 3
// (10, 2), (8, 4), (0, 1), (5, 1), (3, 3)

// 7, 1
// 9, 1
// 10, 1
// 11, 1
 
// 3, 3
// 6, 3
// 9, 3
// 12, 3

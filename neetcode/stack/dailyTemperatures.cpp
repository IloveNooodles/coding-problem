class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        // stack store the index and the val
        stack<pair<int, int>> s;
        map<int, int> m;
        vector<int> res(size, 0);

        //create hash map
        for(int i = 0; i < size; i++){
            m[temperatures[i]] = 0;
        }

        for(int i = 0; i < size; i++){
            // Create monotonic decrease stack
            while(!s.empty() && s.top().second < temperatures[i]){
                auto item = s.top(); s.pop();
                res[item.first] = (i - item.first);
            }
            s.push(make_pair(i, temperatures[i]));
        }

        return res;
    }
};

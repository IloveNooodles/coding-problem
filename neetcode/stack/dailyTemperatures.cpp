class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i = 1, len = temperatures.size();
        stack<pair<int,int>> s;
        s.push({temperatures[0], 0});
        vector<int> ans(len, 0);
        for(int i = 1; i < len; i++){
            while(!s.empty() && i < len){
                auto [val, idx] = s.top();

                if(val >= temperatures[i]){
                    break;
                }

                if(val < temperatures[i]){
                    ans[idx] = i - idx; 
                    s.pop();
                    continue;
                }
            }

            if(i < len) s.push({temperatures[i], i});
        }

        return ans;
    }
};

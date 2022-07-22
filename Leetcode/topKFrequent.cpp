class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mapNum;
        vector<int> ans;
        for (int a : nums) {
            if(mapNum.find(a) != mapNum.end()){
                mapNum[a]++;
                continue;
            }
            mapNum[a] = 1;
        }
        
        vector<pair<int, int>> P;
        
        for(const auto &m : mapNum) {
            P.push_back(m);
        }
        
        sort(P.begin(), P.end(), cmp);
        
        for(const auto &m : P){
            if(k <= 0) break;
            ans.push_back(m.first);
            k--;
        }
        return ans;
    }
    
    static bool cmp(pair<int, int> p1, pair<int, int> p2) {
        return p1.second > p2.second;
    }
};

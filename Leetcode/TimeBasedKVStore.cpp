class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> m;

    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = upper_bound(begin(m[key]), end(m[key]), pair<int, string>(timestamp, ""), [](auto a, auto b){return a.first < b.first;});
        return it == m[key].begin() ? "" : prev(it)->second;

        // if (it == m.end()) {
        //     return "";
        // } 
        // auto &v = it->second;
        // int left = 0, right = v.size() - 1;
        // string res = "";
        // while(left <= right) {
        //     int mid = left + (right - left)/2;
        //     if(timestamp >= v[mid].first){
        //         res = v[mid].second;
        //         left = mid + 1;
        //         continue;
        //     }

        //     right = mid - 1;
        // }
        // return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

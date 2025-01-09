class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int size = words.size();
        set<string> s;
        vector<string> ans;
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                string prev = words[i];
                string cur = words[j];
                if(i == j) continue;
                if(cur.size() > prev.size()) continue;
                if(prev.find(cur) != std::string::npos) {
                    s.insert(cur);
                }
            }
        }

        auto it = s.begin();
        while(it != s.end()){
            ans.push_back(*it);
            it++;
        }

        return ans;
    }
};

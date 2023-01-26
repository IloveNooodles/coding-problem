class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sortStrs;
        map<string, vector<string>> anagramMap;
        vector<vector<string>> ans;
        
        for (string s : strs){
            sort(s.begin(), s.end());
            sortStrs.push_back(s);
        }
        
        int size = strs.size();
        for (int i = 0; i < size; i++){
            anagramMap[sortStrs[i]].push_back(strs[i]);
        }
        
        for (const auto &map : anagramMap) {
            ans.push_back(anagramMap[map.first]);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
        map<int, vector<int>> sortMap;
        int size = arr.size();
        for(int i = 0; i < size; i++) {
            int one = countOne(arr[i]);
            sortMap[one].push_back(arr[i]);
        }
        for(auto it = sortMap.begin(); it != sortMap.end(); it++) {
            int vSize = sortMap[it->first].size();
            sort(sortMap[it->first].begin(), sortMap[it->first].end());
            for(int j = 0; j < vSize; j++) ans.push_back(sortMap[it->first][j]);
        }
        return ans;
    }
    
    int countOne(int number){
        int count = 0;
        while(number){
            number &= number - 1;
            count++;
        }
        return count;
    }
};

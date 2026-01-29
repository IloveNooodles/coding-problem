class Solution {
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<vector<long long>> adjList(26, vector<long long>(26, INT_MAX));
        int size = cost.size();
        for(int i = 0; i < size; i++){
            char from = original[i];
            char to = changed[i];
            adjList[from - 'a'][to - 'a'] = min(adjList[from-'a'][to-'a'], (long long)cost[i]);
        }

        for(int i = 0; i < 26; i++) adjList[i][i] = 0;
        for(int k = 0; k < 26; k++){
            for(int i = 0; i < 26; i++){
                for(int j = 0; j < 26; j++){
                    adjList[i][j] = min(adjList[i][j], adjList[i][k] + adjList[k][j]);
                }
            }
        }

        int sourceSize = source.size();
        long long ans = 0;
        for(int i = 0; i < sourceSize; i++){
            if(source[i] == target[i]) continue;
            long long cost = adjList[source[i] - 'a'][target[i] - 'a'];
            if(cost >= INT_MAX) return -1;
            ans += cost;
        }

        return ans;
    }

};

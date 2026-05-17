class Solution {
public:
    bool visited[1 << 16] = {false};
    bool dfs(vector<int> &arr, int start){
        if(start < 0 || start >= arr.size() || visited[start]) return false;
        if(arr[start] == 0) return true;
        visited[start] = true;
        bool plus = dfs(arr, start + arr[start]);
        bool mins = dfs(arr, start - arr[start]);

        return plus || mins;
    }

    bool canReach(vector<int>& arr, int start) {
        return dfs(arr, start);
    }
};

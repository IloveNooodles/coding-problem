class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        map<vector<int>, int> m;
        int modulo = 0;
        vector<int> current(cells);
        vector<int> result(cells);
        int target = 0;
        for(int i = 1; i < 64; i++){
            for(int j = 1; j < 7; j++){
                if(current[j - 1] == current[j + 1]) {
                    result[j] = 1;
                } else {
                    result[j] = 0; 
                }
            }
            result[0] = 0; result[7] = 0;
            current = result;
            if(m.find(result) != m.end()) {
                modulo = i - m[result];
                int to_cycle = (n - m[result]) % modulo;
                target = m[result] + to_cycle;
                break;
            }
            
            m[result] = i;
        }
        
        cout << modulo << endl;
        for(auto x : m) {
            if(x.second == target) return x.first;
        }
        
        return current;
    }
};

// 0 1 0 1 1 0 0 1
// 0 1 1 0 0 0 0 0
// 0 0 0 0 1 1 1 0
// 0 1 1 0 0 1 0 0
// 0 0 0 0 0 1 0 0
// 0 1 1 1 0 1 0 0
// 0 0 1 0 1 1 0 0
// 0 0 1 1 0 0 0 02

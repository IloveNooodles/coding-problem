class Solution {
public:
    long long combination(long long n){
        return (n * (n - 1)) / 2;
    }

    long long countBadPairs(vector<int>& nums) {
        map<long long, long long> m;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            long long cur = nums[i] - i;
            if(m.find(cur) == m.end()) m[cur] = 1;
            else m[cur]++;
        }

        long long total = 0;
        for(auto& [key, value]: m){
            if(value > 1) total += combination(value);
        }

        return combination(size) - total;
    }

};

// 4, 1, 3, 3
// 1, 3, 3, 4
// 1, 2, 3, 0

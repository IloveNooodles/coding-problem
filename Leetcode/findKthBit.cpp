class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "011";
        while(s.size() < k){
            string replica = s;
            int cur = s.size();
            int power = log2(cur);
            int idx = pow(2, power) - 1;
            replica[idx] = '0';
            s = s + "1" + replica;
        }

        return s[k-1];
    }


};

// 2^(k-1) - 1 = 1
// [1], [3], [7] = 1
//1, 3, 7, 15, 2^k - 1
// 0 = 1
// 0 1 1 = 3
// 0 1 1 1 0 0 1 = normal 
// 1 0 0 0 1 1 0
// 0 1 1 0 0 0 1

// 0 1 1 1 0 0 1 1 0 1 1 0 0 0 1 1
// 1 0 0 0 1 1 0 0 1 0 0 1 1 1 0
// 0 1 1 1 0 0 1 0 0 1 1 0 0 0 1

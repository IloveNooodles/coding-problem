class Solution {
public:
    vector<int> minOperations(string boxes) {
        int size = boxes.size();
        vector<int> ans(size, 0);
        vector<int> prefSum(size + 2, 0);
        vector<int> prefSumCnt(size + 2, 0);
        prefSumCnt[0] = boxes[0] - '0';
        for(int i = 1; i < size; i++){
            int boxAtPos = boxes[i] - '0';
            prefSumCnt[i] = prefSumCnt[i - 1] + boxAtPos;
            prefSum[i] = prefSum[i - 1] + i * boxAtPos;
        }
        for(int i = 0; i < size; i++){
            int suff = (prefSum[size - 1] - prefSum[i]) - (prefSumCnt[size - 1] - prefSumCnt[i]) * i;
            int pref = prefSumCnt[i] * i  - prefSum[i];
            ans[i] = pref + suff; 
        }
        return ans;
    }
};

// prefSum[i], mindahin bola [i] ke 0 berapa butuhnya
// prefSum[i] sigma index bola sampe kardus ke i, 0
// 0 0 2 2 6 11
// 0 0 1 1 2 3
//
// 0 0 1 0 1 1
//     ^ (11 - 2) - (2 * 2)
//       ^ ((11 - 2) - (3 * 2)) + (2) + ((5 - i) * 1)
// (b0 - i), (b0 - i) . . .
// bi ans ke [i], (b0 - i) berarti dari index 0 harus pindahin berapa bola ke i
// (b0 - 3) + (b1 - 2) + (b2 - 1) + b3 + (b4 + 1) + (b5 + 2) + (b6 + 3)
// ans[i] = abs(b0 - i) + abs(b1 - i) + abs(b2 - i) ... abs(bn - i)
// i = 3
// ans[i] = (b0 - i), mindahin bola 0 ke i
// ans[3] = (3 - b0) + (b1 - 3) + (b2 - 3)
// ans[3] = (3*prefSumCnt[3] - (prefSum[3])) + ((prefSum[6] - prefSum[3]) - (3 * premSumCnt[6] - prefSumCnt[3])

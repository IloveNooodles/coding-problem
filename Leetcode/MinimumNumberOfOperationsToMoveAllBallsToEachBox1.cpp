class Solution {
public:
  vector<int> minOperations(string boxes) {
    int size = boxes.size();
    vector<int> prefSum(size, 0);
    vector<int> suffSum(size, 0);
    vector<int> ans;
    for (int i = 0; i < size; i++) {
      int temp = 0;
      for (int j = 0; j < size; j++) {
        if (boxes[j] == '0' || i == j) {
          continue;
        }
        int diff = abs(j - i);
        temp += diff;
      }
      ans.push_back(temp);
    }

    return ans;
  }
};

// 1 1 0
// b1, b2, b3
// b2,
// 1 1 3

// 0 0 1 0 1 1
// prefix
// 0 0 2 2 6 11
// 0 0 1 1 2 3
// suffix
// 4 4 4 1 1 0
// 3 3 3 2 2 1

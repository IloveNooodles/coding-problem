class Solution {
public:
  char shift(char input, long long shift) {
    int inputAsInteger = input - 'a';
    int shiftAmount = shift % 26;
    inputAsInteger = ((inputAsInteger + shiftAmount) % 26 + 26) % 26;
    return inputAsInteger + 'a';
  }

  string shiftingLetters(string s, vector<vector<int>> &shifts) {
    int shiftSize = shifts.size();
    int stringSize = s.size();
    vector<int> lineSweep(stringSize + 5, 0);
    for (int i = 0; i < shiftSize; i++) {
      vector<int> element = shifts[i];
      int a = element[0], b = element[1], c = element[2];
      int multiplier = c * 2 - 1;
      lineSweep[a] += multiplier;
      lineSweep[b + 1] += multiplier * -1;
    }

    vector<int> prefSum(stringSize + 5, 0);
    for (int i = 0; i < stringSize; i++) {
      if (i == 0)
        prefSum[i] = lineSweep[i];
      else
        prefSum[i] = prefSum[i - 1] + lineSweep[i];
      prefSum[i] %= 26;
    }

    for (int i = 0; i < stringSize; i++) {
      s[i] = shift(s[i], prefSum[i]);
    }

    return s;
  }
};

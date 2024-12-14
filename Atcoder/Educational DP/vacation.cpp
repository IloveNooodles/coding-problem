#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> vList;
  for (int i = 0; i < n; i++) {
    vector<int> oneList;
    for (int j = 0; j < 3; j++) {
      int x;
      cin >> x;
      oneList.push_back(x);
    }
    vList.push_back(oneList);
  }
  vector<vector<int>> ans(n, vector<int>(3, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == 0) {
        ans[i][j] = vList[i][j];
        continue;
      }
      if (j == 0) {
        ans[i][j] = max(ans[i - 1][j + 1], ans[i - 1][j + 2]) + vList[i][j];
      } else if (j == 1) {
        ans[i][j] = max(ans[i - 1][j - 1], ans[i - 1][j + 1]) + vList[i][j];
      } else {
        ans[i][j] = max(ans[i - 1][j - 2], ans[i - 1][j - 1]) + vList[i][j];
      }
    }
  }
  int best = -9999;
  for (int i = 0; i < 3; i++) {
    best = max(best, ans[n - 1][i]);
  }
  cout << best;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
  // input the size
  int n, k;
  cin >> n >> k;
  vector<int> container(n);
  for(int i = 0; i < n; i++){
    cin >> container[i];
  }
  vector<int> dp(n + 1, INT_MAX);
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = abs(container[1] - container[0]);
  for(int i = 3; i <= n; i++) {
    for (int j = k; j > 0; j--) {
      if (i > j) {
          dp[i] = min(dp[i - j] + abs(container[i - 1] - container[i - 1 - j]), dp[i]);
      }
    }
  }
  cout << dp[n];
}
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
  // input the size
  int n;
  cin >> n;
  vector<int> container(n);
  for(int i = 0; i < n; i++){
    cin >> container[i];
  }
  vector<int> dp(n + 1, 0);
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = abs(container[1] - container[0]);
  for(int i = 3; i <= n; i++) {
    dp[i] = min(dp[i - 1] + abs(container[i - 1] - container[i - 2]), dp[i-2] + abs(container[i - 1] - container[i - 3]));
  }
  cout << dp[n];
}
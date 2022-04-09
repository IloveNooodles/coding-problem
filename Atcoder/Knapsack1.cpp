#include <iostream>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    long long weight[n];
    long long value[n];
    
    //initiate the condition
    for(int i = 0; i < n; i++){
        cin >> weight[i] >> value[i];
    }
    
    //make and createtable
    long long dp[n][w+1];
    for(long i = 0; i < n; i++){
        for(long j = 0; j <= w; j++){
            if(j == 0) dp[i][j] = 0;
            else if (j >= weight[i]){
                if(i > 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight[i]] + value[i]);
                else dp[i][j] = max(dp[i][j-1], value[i]);
            }
            else{
                if(i > 0) dp[i][j] = dp[i - 1][j];
                else dp[i][j] = dp[i][j - 1];
            } 
        }
    }
    for(int i = 0 ; i < n; i++){
      for(int j = 0; j <= w; j++){
        cout << dp[i][j] << " ";
      }
      cout << "\n";
    }
    cout << dp[n - 1][w];
}
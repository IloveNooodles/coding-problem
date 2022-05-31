#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long sum = 0, oddpos = 10001, oddneg = -10001, arr[100003] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 0){
            sum = sum + arr[i];
        }
        if(arr[i] > 0 && arr[i] < oddpos){
            if(arr[i]%2 == 1){
                oddpos = arr[i];
            }
        }
         if(arr[i] < 0 && arr[i] > oddneg){
            if(arr[i]%2 == -1){
                oddneg = arr[i];
            }
         }
    }

    if(sum%2 == 1 && sum > 0){
        cout << sum;
    }
    else cout << max(sum + oddneg, sum - oddpos);
    return 0;
}



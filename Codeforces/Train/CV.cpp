#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, arr[101], count = 0, temp;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count++;
            if(arr[i+1] == 1 && arr[i+2] == 0){
                temp = count;
                break;
                count = 0;
            }
        }
    }
}


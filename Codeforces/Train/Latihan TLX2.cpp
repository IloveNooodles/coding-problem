#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> d1;
    deque<int> d2;
    int t, n, k, max = 0;
    cin >> t >> n >> k;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            d1.push_back(x);
        }
        for(int i = 0; i < n; i++){
            int max = 0;
            for(int j = 0; j < k; j++){
                d2.push_back(d1[j]);
                if(d2[j] > max){
                    max = d2[j];
                }
            cout << max;
            }
            d2.empty();
        }
        d1.empty();
    }
    return 0;
}

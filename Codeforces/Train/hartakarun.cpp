#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a[200][3];
    cin >> n;
    int timeMin = 10000, Hmin = 10000;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
        if(timeMin > a[i][0]){
            timeMin = a[i][0];
        }
        if(Hmin > a[i][1]){
            Hmin = a[i][1];
        }
    }
    cout << timeMin << " " << Hmin << endl;
}

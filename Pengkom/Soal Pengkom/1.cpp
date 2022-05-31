#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    bool ilhamNumber = true;
    while(x > 0){
        int temp = x%10;
        if(temp == 2 || temp == 7){
            ilhamNumber = true;
        }else ilhamNumber = false;
        x = x/10;
    }
    if(ilhamNumber) cout << "YA";
    else cout << "NO";
}
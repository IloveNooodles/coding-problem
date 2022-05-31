#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    set<int> s;
    int length = s.size(), q, x, y;
    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> y >> x;
        if(y == 1){
            s.insert(x);
        }
        if(y == 2){
            s.erase(x);
        }
        if(y == 3){
            cout << (s.find(x) == s.end() ? "No" : "Yes") << endl;
            }
    }
    return 0;
}

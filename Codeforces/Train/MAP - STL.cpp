#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, int> m;
    int length = m.size(), q, x, y;
    cin >> q;

    for(int i = 0; i < q; i++){
        string tex;
        cin >> x;
        if(x == 1){
            cin >> tex >> y;
            map<string, int>::iterator it = m.find(tex);
            if(m.find(tex) == m.end()){
                m.insert(make_pair(tex, y));
            } else if(m.find(tex) != m.end()){
                int temp;
                temp = m[tex];
                m.erase(tex);
                m.insert(make_pair(tex, temp + y));
            }
        }
        if(x == 2){
            cin >> tex;
            m.erase(tex);
        }
        if(x == 3){
            cin >> tex;
            cout << m[tex] << endl;
            }
    }
    return 0;
}

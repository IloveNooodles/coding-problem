#include <bits/stdc++.h>
using namespace std;

#define mp             make_pair
#define pb             push_back
#define fi             first
#define se             second
#define sz(x)          (int)((x).size())
#define fill(x, y)     memset(y, x, sizeof(y))
#define all(x)         (x).begin(), (x).end()
#define ci(x)         long long x;       cin>>x;
#define cii(x, y)     int x, y;    cin>>x>>y;
#define ciii(x, y, z) ll x, y, z; cin>>x>>y>>z;
#define TC(x)          ci(x); while(x --)
#define rep(i, x, y)   for ( int i = x; i <= y; i ++)
#define repi(i, x, y)  for ( int i = x; i >= y; i --)
#define fore(itr, x)   for ( = x.begin(); itr != x.end(); itr ++)
#define forei(itr, x)  for (itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define endl "\n"
typedef unsigned long long      ull;
typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<int, ii>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 101;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;

int main () {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t > 0){
        int n;
        cin >> n;
        if(n/1111 != 0){
            cout << n/1111 * 10 << endl;
        }else if(n/111 != 0){
            if(n/111 > 1) cout << 6 + (n/111 - 1)*10 << endl;
            else cout << n/111 * 6 << endl;
        }else if(n/11 != 0){
            if(n/11 > 1) cout << 3 + (n/11 - 1)*10 << endl;
            else cout << n/11 * 3 << endl;
        }else {
            if(n > 1) cout << 1 + 10*(n-1) << endl;
            else cout << 1 << endl;
        }
        t--;
    }

    return 0;
}


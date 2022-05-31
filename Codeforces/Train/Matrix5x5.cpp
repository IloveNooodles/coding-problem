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
    int a1,a2,a3,a4,a5,b1,b2,b3,b4,b5,c1,c2,c3,c4,c5,d1,d2,d3,d4,d5,e1,e2,e3,e4,e5;
    ll ans = 0;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> b1 >> b2 >> b3 >> b4 >> b5 >> c1 >> c2 >> c3 >> c4 >> c5 >> d1 >> d2 >> d3 >> d4 >> d5 >> e1 >> e2 >> e3 >> e4 >> e5;
    ans = (a1*b2*c3*d4*e5) + (a2*b3*c4*d5*e1) + (a3*b4*c5*d1*e2) + (a4*b5*c1*d2*e3) + (a5*b1*c2*d3*e4);
    ans = ans - (e1*d2*c3*b4*a5) - (e2*d3*c4*b5*a1) - (e3*d4*c5*b1*a2) - (e4*d5*c1*b2*a3) - (e4*d1*c2*b3*a4);

    if(ans == 0){
        cout << "TIDAK" << endl;
        cout << "0";
    }else{
        cout << "YES" << endl;
        cout << ans;
    }
    return 0;
}


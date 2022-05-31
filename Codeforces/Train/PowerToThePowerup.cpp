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
const   ll             inf = 1e9 + 7;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;


ll binexp(ll a, ll b){
    if(a == b && b == 0){
        return 1;
    }
    if(b == 0){
        return 1;
    } ll res = binexp(a, b/2);
    if(b%2 != 0){
        return res%(inf-1) * res%(inf-1) * a%(inf-1);
    } else return res%(inf-1) * res%(inf-1);
}

ll binexp2(ll a, ll b){
    if(a == b && b == 0){
        return 1;
    }
    if(b == 0){
        return 1;
    } ll res = binexp2(a, b/2);
    if(b%2 != 0){
        return res%inf * res%inf * a%inf;
    } else return res%inf * res%inf;
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    while(cin >> a >> b >> c){
        ll res1, res2;
        if(a == b && b == c && c == -1){
            break;
        }
        if(a%inf == 0 && a != 0){
            res2 = 0;
        }
        else if(a == 0 && b == 0 && c == 0){
            res2 = 0;
        }else if(a == 0 && b == 0 && c!=0){
            res2 = 1;
        } else {
        res1 = binexp(b, c);
        res2 = binexp2(a, res1);
        }

        cout << res2 << endl;

    }
    return 0;
}


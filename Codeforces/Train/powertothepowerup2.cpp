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

ll modpow(ll x, ll y, ll mod){
    ll res = 1;
    while(y > 0){
    if(y%2 != 0){
        res = (res%mod * x%mod)%mod;
    }
    y = y/2;
    x = (x%mod * x%mod)%mod;
    }
    return res;
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(true){
        ll a, b, c;
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1){
            break;
        }
        else if(c == 0){
            cout << a%inf << endl;
        }
        else if(b == 0){
            cout << "1" << endl;
        }
        else if(a%inf == 0){
            cout << "0" << endl;
        }
        else{
            ll res = modpow(b, c, inf - 1);
            res = modpow(a, res, inf);
            cout << res << endl;
        }
    }
    return 0;
}


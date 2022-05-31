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
const   int            inf = 1e5 + 1;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;

ll binexp(ll a, ll b, ll c){
    if(b == 0){
        return 1;
    } long long res = binexp(a, b/2, c);
    if(b%2 != 0){
        return res%c * res%c * a%c;
    } else {
        return res%c * res%c;
    }
}

ll binexp2(ll a, ll b, ll m){
  a %= m;
  ll res = 1;
  while(b > 0){
    if(b & 1){
      res = res * a % m;
    }
    a = a * a % m;
    b = b/2;
  }
  return res;
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, a[inf], x
    cin >> t;
    for(int i = 0; i < t; i++){
        ll x, y, n;
        cin >> x >> y >> n;
        a[i] = binexp2(x, y, n);
    }
    cin >> x;

    for(int i = 0; i < t; i++){
        cout << a[i] << endl;
    }
    return 0;
}


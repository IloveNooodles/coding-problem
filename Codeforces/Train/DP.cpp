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
const   ll             inf = 1e7 + 1;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, w;
    cin >> n >> w;
    ll a[101], b[101];
    for(int i = 0; i < n; i++){
        cin >> b[i] >> a[i];
    }
    sort(a, a+n);
    sort(b, b+n);

   ll dp[100001];
   for(ll i = 0; i < n-1; i++){
        for(ll j = i+1; j < n; j++){
            ll temp = b[i] + b[j];
            dp[temp] = a[i] + a[j];
        }
    }
    ll ans = 0;
    while(w){
        if(dp[w] != 0){
            ans = max(dp[w], ans);
            break;
        }
        w--;
    }
    cout << ans;
    return 0;
}


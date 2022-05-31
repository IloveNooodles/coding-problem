#include <bits/stdc++.h>
#include <numeric>
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
#define rep(i, x, y)   for (int i = x; i <= y; i ++)
#define repr(i, x, y)  for (int i = x; i >= y; i --)
#define forn(i, n)     for(int i = 0; i < n; i++)
#define fore(itr, x)   for (itr = x.begin(); itr != x.end(); itr ++)
#define forei(itr, x)  for (itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define endl "\n"
typedef unsigned long long      ull;
typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<int, ii>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 1e9 + 5;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;
const   int            N = 1e2+3;
const   int            W = 1e5+3;

int val[N], arr[N];
ll dp[N][W];

void solve(){
    int n, w;
    cin >> n >> w;
    for(int i = 1; i <= n; i++){
        cin >> arr[i] >> val[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= w; j++){
            if(j >= arr[i]){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr[i]] + val[i]);
            }
        }
    }
    cout << dp[n][w] << endl;
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}

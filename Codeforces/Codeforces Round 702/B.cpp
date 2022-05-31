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
#define rep(i, x, y)   for ( int i = x; i <= y; i ++)
#define repi(i, x, y)  for ( int i = x; i >= y; i --)
#define forn(i, n)     for(int i = 0; i < n; i++)
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
const   int            inf = 1e9 + 5;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;

void solve(){
        int a; 
        cin >> a;
        int cnt[3] = {0, 0, 0};
        forn(i, a){
            int x;
            cin >> x;
            cnt[x%3]++;
        }
        int ans = 0;
        int m = a/3;
        if(cnt[0] > m){
            ans+=(cnt[0] - m);
            cnt[1] += (cnt[0] - m);
            cnt[0] = m; 
        }
        if(cnt[1] > m){
            ans+=(cnt[1] - m);
            cnt[2] += (cnt[1] - m);
            cnt[1] = m; 
        }
        if(cnt[2] > m){
            ans+=(cnt[2] - m);
            cnt[0] += (cnt[2] - m);
            cnt[2] = m; 
        }
        if(cnt[0] > m){
            ans+=(cnt[0] - m);
            cnt[1] += (cnt[0] - m);
            cnt[0] = m; 
        }
        cout << ans << endl;
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    TC(x){
        solve();
    }   
}

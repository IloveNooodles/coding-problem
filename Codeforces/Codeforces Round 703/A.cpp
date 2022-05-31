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
#define rep(i, x, y)   for (int i = x; i < y; i ++)
#define repr(i, x, y)  for (int i = x; i > y; i --)
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

void solve(){
   ci(n);
   ll arr[n];
   forn(i, n){
       cin >> arr[i];
   }
   ll mini = 0;
   for(int i = 0; i < n - 1; i++){
       if(arr[i+1] > arr[i]){
           continue;
       }
       else{
           ll ans = abs(arr[i] - mini);
           arr[i] = arr[i] - ans;
           arr[i+1] = arr[i+1] + ans;
            // if(arr[i] < 0 || arr[i] == arr[i-1]){
            //     cout << "NO" << endl;
            //     return;
            // }
       }
       mini++;
   }
   for(int i = 0; i < n-1; i++){
       if(arr[i+1] == arr[i] || arr[i] < 0){
           cout << "NO" << endl;
           return;
       }
   }
   cout << "YES" << endl;
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

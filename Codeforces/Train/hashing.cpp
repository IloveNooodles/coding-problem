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
const   int            inf = 1e9 + 5;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;

/*int hashingFunc (int x, int y){
    ll hasil = x*x + 2*x*y + x + 1;
    return hasil;
}*/

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    //map<ll, ll> m;
    bool hashing = false;
    cin >> n;
    if(n%2 == 1){
    for(int i = 1; i < sqrt(n); i++){
        if((n - i*i - i + 1)%2*i == 0 && n > 1){
            ll x = i, y =(n - i*i - i - 1)/2*i;
                if(y > 0){
                    cout << x << " " << y;
                    hashing = true;
                    }
            }
        if(hashing == true){
            break;
            }
        }
    }

    if(!hashing){
      cout << "NO";
    }

    return 0;
}

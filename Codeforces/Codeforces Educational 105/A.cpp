#include <bits\stdc++.h>
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
    string a;
    cin >> a;
    int bisa = true;
    int len = a.length();
    int tex[3];
    for(int i = 0; i < len; i++){
       if(a[i] == 'A')tex[0]++;
       else if(a[i] == 'B')tex[1]++;
       else tex[2]++;
    }
    if (len > 4){
        if(tex[0] != tex[1] && tex[0] != tex[2]){
            if(tex[0] > len/2 || tex[1] > len/2 || tex[2] > len/2){
                bisa = false;
            }
        }
    } else {
        for(int i = 0; i < len; i += 2){
            if(i + 2 < len){
                if(a[i] != a[i+2]){
                    bisa = false;
                }
            }
        }
    }

    if(bisa)cout << "YES";
    else cout << "NO";
    
    cout << endl;
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

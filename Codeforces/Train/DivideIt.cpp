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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        ll n, count = 0;
        cin >> n;
        if(n != 0){
            while(n%5 == 0){
                n = 4*n/5;
                count++;
            }
            while(n%3 == 0){
                n = 2*n/3;
                count++;
            }while(n%2 == 0){
                n = n/2;
                count++;
            }
            if(n != 1){
                count = -1;
            }
        }
        cout << count << endl;
    }
    return 0;
}


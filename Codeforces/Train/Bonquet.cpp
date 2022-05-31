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

long long int gcd(long long int a, long long int b){
    if(a == 0){
        return b;
    } return gcd(b%a, a);
}

long long int combin(long long int a, long long int b){
    long long int p = 1, k = 1;
    if(a - b < b){
        b = a - b;
    } if(b != 0){
        while(b){
            p = p*a;
            k = k*b;

            long long int m = gcd(p, k);

            p = p/m;
            k = k/m;

            a--;
            b--;
        }
    }

    return p;
}
int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while(cin >> a >> b){
        if(a == b && b == 0){
            break;
        } cout << a << " things taken " << b << " at a time is " << combin(a, b) << " exactly." << endl;
    }
    return 0;
}


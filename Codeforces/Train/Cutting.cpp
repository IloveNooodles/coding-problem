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

int gcd(int a, int b){
    if(a == 0){
        return b;
    } return gcd(b%a, a);
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int k, arr[51] = {}, hasil;
        cin >> k;
        for(int i = 0; i < k; i++){
            cin >> arr[i];
        }
        hasil = arr[0];

        for(int i = 1; i < k; i++){
          hasil = gcd(hasil, arr[i]);
        }
        for(int i = 0; i < k; i++){
            arr[i] = arr[i] / hasil;
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

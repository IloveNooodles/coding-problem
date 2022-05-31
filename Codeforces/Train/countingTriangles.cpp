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

int main () {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    int k = 1;
    while(t > 0){
        ll n, arr[2001];
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 0;
        sort(arr, arr+n);
        for(int j = n-1; j >= 1; j--){
            int a, b;
            a = 0, b = j - 1;
            while(a < b){
                if(arr[a] + arr[b] > arr[j]){
                    count += b - a;
                    b--;
                }else a++;
            }
        }
        cout << "Case " << k << ": " << count << endl;
        k++;
        t--;
    }
    return 0;
}



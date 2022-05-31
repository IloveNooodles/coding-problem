#include <bits/stdc++.h>
using namespace std;

#define mp             make_pair
#define pb             push_back
#define fi             first
#define se             second
#define sf(a)          scanf("%d", &a)
#define sz(x)          (int)((x).size())
#define fill(x, y)     memset(y, x, sizeof(y))
#define forn(i, n)     for(int i = 0; i < n; i++)
#define all(x)         (x).begin(), (x).end()
#define ci(x)          long long x; cin>>x;
#define cii(x, y)      int x, y;    cin>>x>>y;
#define ciii(x, y, z)  ll x, y, z; cin>>x>>y>>z;
#define TC(x)          ci(x); while(x --)
#define rep(i, x, y)   for ( int i = x; i <= y; i ++)
#define repi(i, x, y)  for ( int i = x; i >= y; i --)
#define forei(itr, x)  for (itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define endl "\n"
typedef unsigned long long      ull;
typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<int, ii>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 1e5+2;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;
const   int            mxn = 105;

int length(int a){
    int len = 0;
    while(a > 0){
        if(a%10 != 0){
            len++;
        }
        a = a/10;
    }
    return len;
}

int main () {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    TC(x){
        ci(a);
        int cur = 1;
        int counter = 0;
        cout << length(a) << endl;
        while(a > 0){
            int temp = a%10;
            a = a/10;
            if(temp*(cur) != 0){
                cout << temp*cur << " ";
                counter++;
            }
            cur = cur*10;
        }
        cout << endl;
    }
}

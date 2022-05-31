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

// int alice(int a, char b){
//     int ans = b - 'a';
// }

int main () {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    TC(x){
        string s;
        cin >> s;
        int len = s.length();
        int arr[len+5];
        char x[len+5];
        for(int i = 1; i <= len; i++){
            arr[i] = (s[i-1] - 'a');
        }
        for(int i = 1; i <= len; i+=2){
            if(s[i-1] == 'a'){
                x[i] = alphabet[1];
            }else{
                x[i] = min(alphabet[0], alphabet[(arr[i]-1)%26]);
            }
        }
        for(int i = 2; i <= len; i+=2){
            if(s[i-1] == 'z'){
                x[i] = alphabet[24];
            }else{
                x[i] = max(alphabet[(arr[i]+1)%26], alphabet[25]);
            }
        }
        for(int i = 1; i <= len; i++){
            cout << x[i];
        }
        cout << endl;
    }
}

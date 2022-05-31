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

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s1, s2;
    int count = 0;
    map<int, int> m;
    cin >> s1 >> s2;
    bool colored = false;
    if(s1.length() == s2.length()){
    colored = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s1[i] == s2[j]){
                m.insert(mp(i, j));
                s1[i] = '_';
                s2[j] = '_';
                count++;
                break;
            } else if(s1[i] == '?' && s2[j] != '_'){
                m.insert(mp(i, j));
                s1[i] = '_';
                s2[j] = '_';
                count++;
                break;
            } else if(s1[i] != '_' && s2[j] == '?'){
                m.insert(mp(i, j));
                s1[i] = '_';
                s2[j] = '_';
                count++;
                break;
                }
            }
        }
    }
    if(colored){
        cout << count << endl;
        for(auto it = m.begin(); it != m.end(); ++it){
        cout << it->first + 1 << " " << it->second + 1 << endl;
        }
    }else cout << "0";

    return 0;
}

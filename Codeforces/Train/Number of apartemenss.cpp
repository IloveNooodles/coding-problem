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

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int x;
        cin >> x;
        int cnt3 = 0, cnt5 = 0, cnt7 = 0;
        int temp = x, hasil = 0;
        cnt7 = x/7;
        bool ada = true;
        if(x == 8){
            cout << "1 " << "1 " << "0" << endl;
            continue;
        }
        while(x != 0){
            x = x - 7*cnt7;
            if(x%3 != 0 && x%5 != 0){
                cnt7--;
                x = temp;
                if(cnt7 < 0){
                    ada = false;
                    break;
                }
                continue;
            }
            else if(x%3 == 0){10
                cnt3 = x/3;
                x = x - 3*cnt3;
            }
            else if(x%5 == 0){
                cnt5 = x/5;
                x = x - 5*cnt5;
            }
        }
        if(ada){
            cout << cnt3 << " " << cnt5 << " " << cnt7 << endl;
        } else cout << "-1" << endl;
    }
    return 0;
}


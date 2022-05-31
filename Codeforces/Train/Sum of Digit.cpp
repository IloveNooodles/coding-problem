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


int toDigit(char a){
    return(a - '0');
}

int sumDigit(int n){
    int ans = 0;
    while(n > 0){
        ans = ans + n%10;
        n = n/10;
    }
    return ans;
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int i = 0, temp = 0, ans = 0, len = s.length();
    int count = 0;
    bool digit = true;
    if(len != 1){
        count++;
    for(i; i < len; i++){
        temp = temp + toDigit(s[i]);
        }
    }

    if(len == 1){
        digit = false;
    }
    if(digit){
        while(temp >= 10){
            temp = sumDigit(temp);
            count++;
            }
        cout << count;
    } else if(!digit){
        cout << "0";
    }
    return 0;
}

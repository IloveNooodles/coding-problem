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

    int H, M, S, Ha, Ma, Sa;
    char x[2];
    bool am = true;

    scanf("%d:%d:%d%s", &H, &M, &S, x);

    if(strcmp(x,"AM") == 0){
        am = true;
    }else am = false;

    scanf("%d:%d:%d", &Ha, &Ma, &Sa);

    int temp, temp2, jam = 0, menit = 0, detik = 0;
    temp = S + Sa;
    detik = temp%60;

    temp2 = M + Ma;
    menit = (temp2 + temp/60)%60;

    jam = H + Ha + temp2/60;
    jam = jam%24;

    if(am){
        if(jam >= 12){
            printf("%02d:%02d:%02d PM", jam, menit, detik);
        }else printf("%02d:%02d:%02d AM", jam, menit, detik);
    }else{
        if(jam >= 12){
            printf("%02d:%02d:%02d AM", jam, menit, detik);
        }else printf("%02d:%02d:%02d PM", jam, menit, detik);
    }
    return 0;
}


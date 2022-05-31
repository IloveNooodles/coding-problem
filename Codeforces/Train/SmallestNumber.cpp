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
const   ll            inf = 1e18;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;

long long solve(ll a, ll b, ll c, ll d, string es){
    long long nilai;
    if(es == "+++"){
        nilai = a + b + c + d;
    } else if (es == "++*"){
        nilai = (a+b+c)*d;
    } else if (es == "+*+"){
        nilai = a+b+c*d;
    } else if (es == "*++"){
        nilai = (a*b)+c+d;
    } else if (es == "+**"){
        nilai = (a+b)*c*d;
    } else if (es == "*+*"){
       nilai = (a*b+c)*d;
    } else if (es == "**+"){
        nilai = (a*b)+(c*d);
    } else if (es == "***"){
        nilai = a*b*c*d;
    }
    return nilai;
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string eq;
    char x;
    long long arr[4] = {0}, count = 0, nol = 0, res = inf, cek = 0;
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < 3; i++){
        cin >> x;
        eq.push_back(x);
    }
    sort(arr, arr+4);
    do{
        cek = solve(arr[0], arr[1], arr[2], arr[3], eq);
        if(cek < res){
            res = cek;
        }
    } while(next_permutation(arr, arr+4));
    cout << res;
}


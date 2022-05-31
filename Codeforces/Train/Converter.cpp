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

int changeBasis(int n, int basis){
    int div = 1, hasil = 0;

    while(div*basis <= n){
        div *= basis;
    }

    while(div != 0){
        int temp;
        temp = n/div;
        n = n%div;
        hasil = hasil*10 + temp;
        div = div / basis;
    }
    return hasil;
}

int returnBasis(int n, int basis){
    int div = 1, hasil = 0, count = 0;

    while(div*basis <= n){
        div *= basis;
        count++;
    }

    while(div != 0){
        int temp, res = pow(10, count);
        temp = n/res;
        n = n%res;
        temp = temp * div;
        div = div/basis;
        hasil = hasil + temp;
        count--;
        if(count < 0) break;
    }
    return hasil;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, y, basis;
    cin >> n >> basis >> y;
    cout << changeBasis(n, basis) << " " << returnBasis(y, basis);

    return 0;
}


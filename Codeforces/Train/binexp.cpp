#include <bits\stdc++.h>
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
#define forn(i, n)     for(int i = 0; i < n; i++)
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

long long binpow(long long a, long long b){
  if(b == 0){
    return 1;
  }else if (b % 2 == 1){
    return a * binpow(a, b-1);
  }else{
    return binpow(a*a, b/2);
  }
}

long long binpow2(long long a, long long b){
  long long product = 1;
  while(b > 0){
    if(b%2 == 1){
      product *= a;
      b--;
    }else{
      a = a*a;
      b = b/2;
    }
  }
  return product;
}

int main(){
  cout << binpow2(3,6);
}
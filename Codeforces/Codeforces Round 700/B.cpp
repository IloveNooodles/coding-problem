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
const   int            MAXN = 100010;
 
int A, B, n;
int a[MAXN], b[MAXN];
 
void solve()
{
	scanf("%d%d%d", &A, &B, &n);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &b[i]);
	int64_t damage = 0;
	for (int i = 1; i <= n; ++i)
		damage += int64_t(b[i] + A - 1) / A * a[i];
    cout << damage;
	for (int i = 1; i <= n; ++i){
        cout << B - (damage - a[i]);
		if (B - (damage - a[i]) < 0)
		{
			puts("YES");
			return;
		}
    }
	puts("NO");
}
 
int main()
{
	int tests;
	scanf("%d", &tests);
	while (tests--) solve();
	return 0;
}

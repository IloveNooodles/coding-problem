#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

using ll = long long;
using lb = long double;
using str = string;
using ull = unsigned long long;
using pi = pair<int, int>;
using pii = pair<int, pi>;
using vi = vector<int>;
using vii = vector<pi>;

#define dbg(x)                                                                 \
  cout << "Line(" << __LINE__ << ") -> " << #x << " = " << (x) << endl;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)((x).size())
#define fill(x, y) memset(y, x, sizeof(y))
#define all(x) (x).begin(), (x).end()
#define endl "\n"

const int MOD = 1e9 + 7;
const ll BIG = 1e18;
void setIO(string s) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  if (s != "") {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

ll xceil(ll x, ll y) { return (x + y - 1) / y; }

void solve() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    ll k, l1, l2, r1, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    ll now = 1;
    ll ans = 0;
    ll power = 0;
    while (power < 32) {
      ll yuprange = r2 / now;
      ll ylowrange = xceil(l2, now);
      int adder = min(r1, yuprange) - max(l1, ylowrange);
      if (adder >= 0)
        adder += 1;
      else
        adder = 0;

      ans += adder;
      power++;
      now *= k;
      if (now > 1e9)
        break;
    }

    cout << ans << endl;
  }
}

int main() {
  setIO("");
  solve();
}

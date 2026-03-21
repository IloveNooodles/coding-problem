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
  if (s != "") {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

// M is min cow in each region
void solve() {
  int n, b;
  cin >> n >> b;
  vector<pi> v(n);
  set<int> xs, ys;
  ll xsum = 0, ysum = 0;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    v[i] = {x, y};
    xs.insert(x + 1);
    ys.insert(y + 1);
  }

  int globalMin = INT_MAX;
  for (auto xavg : xs) {
    for (auto yavg : ys) {
      map<int, int> m;
      int localMax = INT_MIN;
      for (int i = 0; i < n; i++) {
        auto [x, y] = v[i];
        if (x < xavg && y < yavg) {
          m[1]++;
        } else if (x < xavg && y > yavg) {
          m[2]++;
        } else if (x > xavg && y < yavg) {
          m[3]++;
        } else {
          m[4]++;
        }
      }
      for (int i = 1; i <= 4; i++) {
        localMax = max(localMax, m[i]);
      }

      globalMin = min(globalMin, localMax);
    }
  }

  cout << globalMin;
  // 6, 4
}
// 3, 1 -- 1
// 5, 3 -- 1
// 5, 5 -- 2
// 7, 3 -- 3
// 7, 7 -- 4
// 9, 1 -- 3
// 9, 7 -- 4

int main() {
  setIO("balancing");
  solve();
}

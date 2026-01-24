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

struct Cow {
  int x, y;
  string dir;
  int index;
};

void solve() {
  int N;
  cin >> N;
  vector<Cow> north, east;
  vector<int> stoppedAt(N, -1);

  for (int i = 0; i < N; i++) {
    string dir;
    int x, y;
    cin >> dir >> x >> y;
    if (dir == "N") {
      north.push_back({x, y, dir, i});
    } else {
      east.push_back({x, y, dir, i});
    }
  }

  sort(north.begin(), north.end(), [](Cow a, Cow b) { return a.x < b.x; });
  sort(east.begin(), east.end(), [](Cow a, Cow b) { return a.y < b.y; });

  for (auto e : east) {
    for (auto n : north) {
      int dn = e.y - n.y;
      int de = n.x - e.x;

      if (dn <= 0 || de <= 0) {
        continue;
      }

      // If e cow already stopped, no need to check further
      if (stoppedAt[e.index] != -1) {
        break;
      }

      // If n cow already stopped, skip
      if (stoppedAt[n.index] != -1) {
        continue;
      }

      // check if north cow is stopped by east cow
      if (de < dn) {
        stoppedAt[n.index] = abs(dn);
      }

      // check if east cow is stopped by north cow
      if (de > dn) {
        stoppedAt[e.index] = abs(de);
        break;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    cout << (stoppedAt[i] == -1 ? "Infinity" : to_string(stoppedAt[i])) << endl;
  }
}

int main() {
  setIO("");
  solve();
}

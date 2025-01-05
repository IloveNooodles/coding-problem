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
#include <ios>
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
using mib = map<int, bool>;

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

void solve() {
  int n;
  cin >> n;
  vector<int> building(n);
  for (int i = 0; i < n; i++) {
    cin >> building[i];
  }

  int globalMax = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      int curHeight = building[i];
      int curMax = 0;
      for (int k = i; k < n; k += j) {
        if (building[k] != curHeight) {
          curMax = 0;
          curHeight = building[k];
        }

        curMax++;
        globalMax = max(curMax, globalMax);
      }
    }
  }
  cout << globalMax;
}

int main() {
  setIO("");
  solve();
}

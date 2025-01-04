#include "cmath"
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
#include <utility>
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

char grid[1024][1024] = {'.'};
bool vis[1024][1024] = {false};
int H, W;

bool dfs(int i, int j, bool isVert, vector<pi> &t, bool ketemu) {
  // cout << i << " " << j;
  if (i < 0 || i >= H || j < 0 || j >= W)
    return false;

  if (grid[i][j] == '#') {
    return false;
  }

  t.pb(make_pair(i, j));
  if (grid[i][j] == 'S') {
    cout << i << " " << j << endl;
    return true;
  }

  bool udah = true;
  if (!vis[i][j]) {
    vis[i][j] = true;
    if (isVert) {
      udah = dfs(i, j - 1, false, t);
      if (!udah)
        dfs(i, j + 1, false, t);
    } else {
      udah = dfs(i - 1, j, true, t);
      if (!udah)
        dfs(i + 1, j, true, t);
    }
  }
  if (udah)
    return true;
  t.pop_back();
  vis[i][j] = false;
  return false;
}

void solve() {
  cin >> H >> W;
  pi start, goal;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == 'S') {
        start = make_pair(i, j);
      }

      if (grid[i][j] == 'G') {
        goal = make_pair(i, j);
      }
    }
  }
  vector<pi> vert, hort;
  dfs(goal.first, goal.second, false, vert);
  dfs(goal.first, goal.second, true, hort);

  cout << vert.size() << " " << hort.size();
}

int main() {
  setIO("");
  solve();
}

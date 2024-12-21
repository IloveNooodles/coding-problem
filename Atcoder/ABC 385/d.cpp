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

pair<int, int> movecoordinats(int x, int y, char move, int size) {
  if (move == 'U') {
    return make_pair(x, y + size);
  }

  if (move == 'D') {
    return make_pair(x, y - size);
  }

  if (move == 'L') {
    return make_pair(x - size, y);
  }

  if (move == 'R') {
    return make_pair(x + size, y);
  }

  return make_pair(x, y);
}

bool is_blocked(int x, int y, char map[128][128]) {
  return map[x - 1][y - 1] == '#';
}
bool is_house(int x, int y, char map[128][128]) {
  return map[x - 1][y - 1] == '@';
}

void solve() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  char map[128][128];
  char is_visited[128][128];
  string movements;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> map[i][j];
      is_visited[i][j] = false;
    }
  }

  cin >> movements;

  // current x, y
  int cur_x = x, cur_y = y;
  int house_passed = 0;
  for (int i = 0; i < movements.size(); i++) {
    char move = movements[i];
    auto [next_x, next_y] = movecoordinats(cur_x, cur_y, move);
    bool block = is_blocked(next_x, next_y, map);
    if (!block) {
      cur_x = next_x;
      cur_y = next_y;
    }
    // cout << move << " " << cur_x << " " << cur_y << " " << block << endl;
    if (is_house(cur_x, cur_y, map) && !is_visited[cur_x][cur_y])
      house_passed++;

    is_visited[cur_x][cur_y] = true;
  }

  cout << cur_x << " " << cur_y << " " << house_passed << endl;
}

int main() {
  setIO("");
  solve();
}

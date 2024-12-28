#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstddef>
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

void solve() {
  ll n, m;
  cin >> n >> m;
  set<pi> coor_black_xy, coor_black_yx, coor_white_xy, coor_white_yx;
  for (int i = 0; i < m; i++) {
    int x, y;
    char z;
    cin >> x >> y >> z;
    pi coor = mp(x, y);
    pi coor_yx = mp(y, x);
    if (z == 'B') {
      coor_black_xy.insert(coor);
      coor_black_yx.insert(coor_yx);
    } else {
      coor_white_xy.insert(coor);
      coor_white_yx.insert(coor_yx);
    }
  }

  // row
  // cek apakah ada i yang item dr kiri trs sisa kanannya putih
  auto it = coor_black_xy.begin();
  // 4 1 B
  // 1 3 B
  string ans;
  bool end;
  while (it != coor_black_xy.end()) {
    pi ele = *it;
    auto found = coor_black_xy.lower_bound(ele);
    if (found != coor_black_xy.end()) {
      pi found_ele = *found;
      if (ele.second == n || found->first == ele.first) {
        cout << ele.first << " " << ele.second << endl;
        cout << "No";
        return;
      }
    }
    it++;
  }

  while (it != coor_black_yx.end()) {
    pi ele = *it;
    auto found = coor_black_yx.lower_bound(ele);
    if (found != coor_black_yx.end()) {
      pi found_ele = *found;
      if (found->first == ele.first && ele.second != 1) {
        cout << ele.first << " " << ele.second << endl;
        cout << "No";
        return;
      }
    }
    it++;
  }

  cout << "Yes";
}
// col
// cek apakah ada i yg item dr atas trs sisa bawahnya putih;

int main() {
  setIO("");
  solve();
}

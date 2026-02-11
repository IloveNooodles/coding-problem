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
#include <unordered_set>
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

void solve() {
  int x, n;
  cin >> x >> n;
  set<int> positions = {0, x};
  multiset<int> segments = {x};
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    // find left and right neighbors
    auto right = positions.lb(p);
    auto left = prev(right);
    int distance = *right - *left;

    auto segment = segments.lb(distance);
    segments.erase(segment);
    segments.insert(p - *left);
    segments.insert(*right - p);
    positions.insert(p);

    cout << *segments.rbegin() << endl;
    // 0, 8 ----- 8
    // 3
    // 8 - 0, 8
    // 0, 3, 8 --- 3, 5
    // 3, 8 ---- 3, 5
    // 0, 3, 6, 8 ---- 3, 3, 2
  }
}

int main() {
  setIO("");
  solve();
}

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

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<vector<int>> x;
  for (int i = 0; i < n; i++) {
    int l;
    cin >> l;
    vector<int> y(l, 0);
    for (int j = 0; j < l; j++) {
      cin >> y[j];
    }
    x.push_back(y);
  }

  ll len = 0;
  vector<ll> cs(n, 0);
  int i = 0;
  bool found = false;
  for (; i < n; i++) {
    cin >> cs[i];
    ll size = x[i].size();
    ll prevLen = len;
    len += size * cs[i];
    // cout << "cur len: " << len << " size: " << size << endl;
    if (len >= k) {
      ll idx = ((k - prevLen - 1) % size);
      cout << x[i][idx];
      // 10, 9
      // 10 - 6 = 4
      // 8 % 2 == 0
      found = true;
      break;
    }

    if (found)
      break;
  }
}

int main() {
  setIO("");
  solve();
}

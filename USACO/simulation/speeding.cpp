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

void solve() {
  ll n, m, max_over_speed = 0;
  vector<pair<ll, ll>> segment_paris;
  cin >> n >> m;
  for (ll i = 0; i < n; i++) {
    ll segment_length, max_speed;
    cin >> segment_length >> max_speed;
    segment_paris.pb({segment_length, max_speed});
  }

  ll segment_idx = 0;
  for (ll i = 0; i < m; i++) {
  }
  cout << max_over_speed << endl;
}

int main() {
  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

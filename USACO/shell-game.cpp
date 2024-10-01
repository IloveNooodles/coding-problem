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
  int n;
  vector<int> ctr(3, 0);
  vector<int> pos(3, 0);
  for (int i = 0; i < 3; i++) {
    pos[i] = i + 1;
  }

  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b, g;
    cin >> a >> b >> g;
    for (int j = 0; j < 3; j++) {
      if (a == pos[j]) {
        pos[j] = b;
      } else if (b == pos[j]) {
        pos[j] = a;
      }

      if (g == pos[j]) {
        ctr[j]++;
      }
    }
  }

  cout << max({ctr[0], ctr[1], ctr[2]}) << endl;
}

int main() {
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

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
const int POUR = 100;

void solve() {
  int m, n, k;
  cin >> m >> n >> k;
  vector<vector<char>> initial(m, vector<char>(n, 0));
  vector<vector<char>> resize(m * k, vector<char>(n * k, '#'));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> initial[i][j];
    }
  }

  for (int i = 0; i < m * k; i++) {
    for (int j = 0; j < n * k; j++) {
      resize[i][j] = initial[i / k][j / k];
    }
  }

  for (int i = 0; i < m * k; i++) {
    for (int j = 0; j < n * k; j++) {
      cout << resize[i][j];
    }
    cout << endl;
  }
}

int main() {
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

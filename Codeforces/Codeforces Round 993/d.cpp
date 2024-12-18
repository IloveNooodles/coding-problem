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
#include <stack>
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

  int t;
  cin >> t;
  int n;
  for (int j = 0; j < t; j++) {
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    vector<bool> seen(2 * 10e5 + 5, false);
    stack<int> can_be_used;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      seen[a[i]] = true;
    }

    for (int i = 1; i <= n; i++) {
      if (!seen[i]) {
        // cout << "INI A[i]: " << i << endl;
        can_be_used.push(i);
      }
    }

    for (int i = 0; i < n; i++) {
      seen[a[i]] = false;
    }

    for (int i = 0; i < n; i++) {
      b[i] = a[i];
      if (seen[a[i]]) {
        b[i] = can_be_used.top();
        can_be_used.pop();
      }

      seen[a[i]] = true;
    }

    for (int i = 0; i < n; i++) {
      cout << b[i] << " ";
    }
    cout << endl;
  }
}

int main() {
  setIO("");
  solve();
}

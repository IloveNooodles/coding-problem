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
  if (s != "") {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

void solve() {
  string s;
  cin >> s;
  vector<vector<int>> v(26);
  for (int i = 0; i < s.size(); i++) {
    v[s[i] - 'A'].pb(i);
  }

  int ans = 0;
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < 26; j++) {
      // check if A[0] < B[0] && A[1] < B[1]
      // 0 < 1, hrs check 1 < 4 || 4 < 5
      // cout << v[i][0] << " " << v[i][1] << endl;
      if (v[i][0] < v[j][0] && v[i][1] < v[j][1] && v[j][0] < v[i][1])
        ans++;
    }
  }

  cout << ans;
}

int main() {
  setIO("circlecross");
  solve();
}

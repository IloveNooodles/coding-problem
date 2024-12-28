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
  int k;
  string s, t;
  cin >> k >> s >> t;

  int sSize = s.size();
  int tSize = t.size();
  int s_ptr = 0;
  int t_ptr = 0;
  int diff = 0;
  while (s_ptr < sSize && t_ptr < tSize) {
    if (s[s_ptr] == t[t_ptr]) {
      s_ptr++;
      t_ptr++;
      continue;
    }

    diff++;
    if (t_ptr + 1 < tSize && s[s_ptr] == t[t_ptr + 1]) {
      t_ptr++;
      continue;
    }

    if (s_ptr + 1 < sSize && s[s_ptr + 1] == t[t_ptr]) {
      s_ptr++;
    }

    s_ptr++;
    t_ptr++;
  }
  if (diff == 1 || diff == 0 && abs(sSize - tSize) <= 1)
    cout << "Yes";
  else
    cout << "No";
}

int main() {
  setIO("");
  solve();
}

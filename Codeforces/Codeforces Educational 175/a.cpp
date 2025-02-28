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

// i mod 3 = i mod 5
// 3j + i = 5k + i
// 3j = 5k
// j = 5x
// k = 3x
// 15x = 15x
// 0 -> 1
// 5 -> 0,1,2
// 15 -> 0,1,2,15
// 42 -> 0,1,2,15,16,17,30,31,32
// 42/5
// n + k - 1 / k
void solve() {
  int tc;
  cin >> tc;
  for (int i = 0; i < tc; i++) {
    long long n;
    cin >> n;
    if (n == 0)
      cout << 1;
    else if (n == 1)
      cout << 2;
    else if (n < 15)
      cout << 3;
    else {
      long long remainder = n % 15 == 0;
      long long substractor = n % 15 == 1;
      cout << ((long long)(n + 15 - 1) / 15) * 3 + remainder - substractor;
    }
    cout << endl;
  }
}

int main() {
  setIO("");
  solve();
}

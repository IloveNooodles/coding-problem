#include "cmath"
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
ll precomputePow[10][20] = {0};

void setIO(string s) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  if (s != "") {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

ll countEach(ll n) {
  vector<int> digits;
  ll ans = 0;
  while (n > 0) {
    int back = n % 10;
    digits.push_back(back);
    n = n / 10;
  }

  int digitsCount = digits.size();
  for (int i = 1; i < 10; i++) {
    for (int j = 0; j < digitsCount - 1; j++) {
      ans += precomputePow[i][j];
    }
  }

  // digit size tapi dari 1 - (angka depan)
  int angkaDepan = digits[digitsCount - 1];
  for (int i = 1; i < angkaDepan; i++) {
    ans += precomputePow[i][digitsCount - 1];
  }

  bool dontCountMore = true;
  for (int i = digitsCount - 2; i >= 0; i--) {
    if (!dontCountMore)
      break;

    ans += min(digits[i], angkaDepan) * precomputePow[angkaDepan][i];
    if (digits[i] >= angkaDepan)
      dontCountMore = false;
  }

  if (dontCountMore)
    ans++;
  return ans;
}

void solve() {
  for (int i = 0; i < 10; i++) {
    precomputePow[i][0] = 1;
    for (int j = 1; j < 20; j++) {
      precomputePow[i][j] = precomputePow[i][j - 1] * i;
    }
  }

  ll l, r;
  cin >> l >> r;
  ll left = countEach(l - 1);
  ll right = countEach(r);
  cout << right - left << endl;
}

int main() {
  setIO("");
  solve();
}

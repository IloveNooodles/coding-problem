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

bool isok(ll val, vector<ll> &arr, ll k) {
  int size = arr.size();
  ll nk = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] >= val)
      continue;

    nk += (val - arr[i] + i) / (i + 1);
    // cout << nk << " ";
    if (nk > k) {
      return false;
    }
  }

  return true;
}

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll lo = 1, high = 4e18;
  while (high - lo > 1) {
    ll mid = lo + (high - lo) / 2;
    if (isok(mid, a, k)) {
      lo = mid;
    } else {
      high = mid;
    }
  }

  cout << lo << endl;
}

int main() {
  setIO("");
  solve();
  return 0;
}

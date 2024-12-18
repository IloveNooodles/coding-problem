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
  vector<ll> capacity(3, 0);
  vector<ll> amount(3, 0);
  for (int i = 0; i < 3; i++) {
    cin >> capacity[i] >> amount[i];
  }

  for (int i = 0; i < POUR; i++) {
    int curIdx = i % 3;
    int nextIdx = (i + 1) % 3;

    ll current = amount[curIdx];
    current += amount[nextIdx];

    if (amount[nextIdx] >= capacity[nextIdx]) {
      continue;
    }

    if (current >= capacity[nextIdx]) {
      amount[curIdx] = current - capacity[nextIdx];
      amount[nextIdx] = capacity[nextIdx];
    } else {
      amount[curIdx] = 0;
      amount[nextIdx] = current;
    }

    // for (int i = 0; i < 3; i++) {
    //   cout << amount[i] << " ";
    // }
    // cout << endl;
  }

  for (int i = 0; i < 3; i++) {
    cout << amount[i] << endl;
  }
}

int main() {
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
}

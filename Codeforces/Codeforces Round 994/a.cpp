#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <deque>
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
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    deque<int> arr;
    for (int j = 0; j < n; j++) {
      int k;
      cin >> k;
      arr.push_back(k);
    }

    int size = arr.size();
    vector<int> newArr;
    int startIdx = 0;
    for (int k = 0; k < arr.size(); k++) {
      if (arr[k] == 0) {
        startIdx++;
        continue;
      }
      break;
    }

    int endIdx = arr.size() - 1;
    for (int k = arr.size() - 1; k > 0; k--) {
      if (arr[k] == 0) {
        endIdx--;
        continue;
      }
      break;
    }

    for (int k = startIdx; k <= endIdx; k++) {
      newArr.push_back(arr[k]);
    }

    size = newArr.size();
    if (size == 0) {
      cout << 0 << endl;
      continue;
    }

    // now arr is only X X X
    int ans = 1;
    for (int k = 0; k < size; k++) {
      // if it contains non zero
      if (newArr[k] == 0) {
        ans = 2;
        break;
      }
    }
    cout << ans << endl;
  }
}

// 5 case
// 0 0 0 0 0 -> 0
// 0 X X X X -> 1
// 0 X X X 0 -> 1
// 0 X 0 X X -> 2
// 0 X 0 X 0 -> 2
// X X X X X -> 1
// X X X X 0 -> 1
// X 0 X X 0 -> 1
int main() {
  setIO("");
  solve();
}

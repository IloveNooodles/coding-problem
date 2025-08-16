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

void solve() {
  int n, m; cin >> n >> m;
  string s, t; cin >> s >> t;
  int size = 5 * 10e5 + 5;
  vector<int> a(size,0);
  for(int i = 0; i < m; i++){
    int l, r; cin >> l >> r;
    a[l]++; a[r+1]--;
  }

  for(int i = 0; i < s.size() + 2; i++){
    if(i == 0) continue;
    a[i] += a[i-1];
  }

  string ans = "";
  for(int i = 1; i <= s.size(); i++){
    if(a[i] % 2 == 0){
      ans += s[i - 1];
    } else {
      ans += t[i - 1];
    }
    // cout << a[i] << " ";
  }
  // 0 1 2 3 4 5 6
  // 0 0 0 0 0 0 0
  //     1    -1
  //   1        -1
  //           1
  //            -1
  //   1 2 2 2 2 0
  //   a p p l e 
  //   l e m o n
  cout << ans << endl;
}

int main() {
  setIO("");
  solve();
  return 0;
}

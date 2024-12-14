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
  if (s != "") {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
  }
}

const int MAX_T = 1000;
void solve() {
  int N;
  cin >> N;
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minheap;
  vector<int> bucket_sizes(N, 0);
  vector<int> endtime(N, 0);
  stack<pair<int, int>> s;
  for (int i = 0; i < N; i++) {
    int s, t, b;
    cin >> s >> t >> b;
    // cout << s << " " << t << " " << b;
    minheap.push({s, i});
    bucket_sizes[i] = b;
    endtime[i] = t;
  }

  int bucket_needed = 0;
  for (int i = 0; i < MAX_T; i++) {
    auto [start, idx] = minheap.top();
    int available_bucket = bucket_sizes[idx];
    if (idx == 0) {
      bucket_needed = available_bucket;
    }

    if (i >= start) {
      bucket_needed -= available_bucket;
      s.push({start, end});
    }
  }
}

int main() {
  setIO("blist");
  solve();
}

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
#include <unordered_set>
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

// 1, 2 --- 1
// 2, 4 --- 2
// 4, 4 ---

void solve() {
  int n;
  cin >> n;
  priority_queue<pi, vii, greater<pi>> minHeap;
  vector<pair<pi, int>> inputs;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    inputs.push_back({{a, b}, i});
  }

  sort(inputs.begin(), inputs.end());
  int globalId = 1;
  stack<int> s;
  s.push(globalId);

  vi ans(n);
  for (int i = 0; i < n; i++) {
    auto [start, end] = inputs[i].first;
    while (!minHeap.empty() && minHeap.top().first < start) {
      s.push(minHeap.top().second);
      minHeap.pop();
    }

    if (s.empty()) {
      globalId++;
      s.push(globalId);
    }

    int roomId = s.top();
    s.pop();
    minHeap.push({end, roomId});
    ans[inputs[i].second] = roomId;
  }

  cout << globalId << endl;
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}

int main() {
  setIO("");
  solve();
}

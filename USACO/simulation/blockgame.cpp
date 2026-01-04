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
  int N;
  cin >> N;
  int global[26] = {0};
  for (int i = 0; i < N; i++) {
    int local1[26] = {0}, local2[26] = {0};
    string s1, s2;
    cin >> s1 >> s2;
    for (int j = 0; j < s1.size(); j++) {
      local1[s1[j] - 'a']++;
    }

    for (int j = 0; j < s2.size(); j++) {
      local2[s2[j] - 'a']++;
    }

    for (int k = 0; k < 26; k++) {
      global[k] += max(local1[k], local2[k]);
    }
  }

  for (int i = 0; i < 26; i++) {
    cout << global[i] << endl;
  }
}

int main() {
  setIO("blocks");
  solve();
}

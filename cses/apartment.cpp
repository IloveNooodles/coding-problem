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

bool acceptable(ll person, ll apartment, ll k) {
  // cout << "person - k" << person - k << " person + k: " << person + k
  // << " apartment: " << apartment << endl;

  bool condition = person - k <= apartment && person + k >= apartment;
  // cout << "condition: " << condition << endl;

  return condition;
}

void solve() {
  multiset<ll> apartments;
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> people(n);
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    people[i] = x;
  }

  for (int i = 0; i < m; i++) {
    ll x;
    cin >> x;
    apartments.insert(x);
  }

  ll initial_size = apartments.size();

  sort(people.begin(), people.end());
  for (ll i = 0; i < n; i++) {
    auto it = apartments.lower_bound(people[i] - k);

    if (it != apartments.end() && acceptable(people[i], *it, k)) {
      apartments.erase(it);
    }
  }

  cout << initial_size - apartments.size();
}

int main() {
  setIO("");
  solve();
}

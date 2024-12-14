#include "algorithm"
#include "iostream"
#include "string"
#include "vector"

using namespace std;
using pii = pair<int, string>;
vector<pii> m(32);

string generate_string_from_number(int x) {
  string a = "ABCDE";
  string s;
  int b = 0;

  for (int i = 0; i < 5; i++) {
    if ((x & (1 << i))) {
      s += a[b];
    }
    b++;
  }
  return s;
}

void solve() {
  for (int i = 1; i <= 31; i++) {
    m[i] = make_pair(0, generate_string_from_number(i));
  }

  int a[5] = {0};
  for (int i = 0; i <= 4; i++) {
    cin >> a[i];
  }

  for (int i = 1; i < 32; i++) {
    for (int j = 0; j < 5; j++) {
      if ((i & (1 << j)) > 0) {
        m[i].first -= a[j];
      }
    }
  }

  sort(m.begin(), m.end());
  for (int i = 0; i <= 31; i++) {
    auto &x = m[i];
    cout << x.second << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
  return 0;
}

#include "iostream"
using namespace std;

void solve() {
  int N;
  char c1, c2;
  string s;
  cin >> N >> c1 >> c2 >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != c1) {
      s[i] = c2;
    }
  }

  cout << s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
  return 0;
}

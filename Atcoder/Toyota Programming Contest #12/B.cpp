#include "iostream"
using namespace std;

int change_if_div(int div, int rating, int adder) {
  if (div == 1) {
    if (rating < 1600 || rating > 2799)
      return rating;
  }

  if (div == 2) {
    if (rating < 1200 || rating > 2399)
      return rating;
  }
  return rating + adder;
}

void solve() {
  int N, R;
  int D, A;
  cin >> N >> R;
  for (int i = 0; i < N; i++) {
    cin >> D >> A;
    R = change_if_div(D, R, A);
  }

  cout << R;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
  return 0;
}

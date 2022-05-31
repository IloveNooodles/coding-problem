#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define fill(x, y) memset(y, x, sizeof(y))
#define all(x) (x).begin(), (x).end()
#define ci(x)  \
  long long x; \
  cin >> x;
#define cii(x, y) \
  int x, y;       \
  cin >> x >> y;
#define ciii(x, y, z) \
  ll x, y, z;         \
  cin >> x >> y >> z;
#define TC(x) \
  ci(x);      \
  while (x--)
#define rep(i, x, y) for (int i = x; i < y; i++)
#define repr(i, x, y) for (int i = x; i > y; i--)
#define forn(i, n) for (int i = 0; i < n; i++)
#define fore(itr, x) for (itr = x.begin(); itr != x.end(); itr++)
#define forei(itr, x) for (itr = x.end() - 1; itr != x.begin() - 1; itr--)
#define endl "\n"
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
const int inf = 1e9 + 5;
const double eps = 0;
const int ms = 0;
const int md = 0;

float kalkulator(float a, float b, char op)
{
  float hasil = 0;
  if (op == '+')
  {
    hasil = a + b;
  }
  else if (op == '-')
  {
    hasil = a - b;
  }
  else if (op == '^')
  {
    hasil = 1;
    for (int i = 0; i < b; i++)
    {
      hasil *= a;
    }
  }
  else if (op == '*')
  {
    hasil = a * b;
  }
  else if (op == '/')
  {
    hasil = a / b;
  }
  return hasil;
}

int main()
{
  // freopen("textin.inp","r",stdin);
  // freopen("text.out", "w", stdout);
  //  ios_base::sync_with_stdio(0);
  //  cin.tie(0);
  cout << "Selamat datang di kalkulator" << endl;
  while (true)
  {
    float a, b;
    char op;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << endl;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << endl;
    cout << "Masukkan tipe operasi: ";
    cin >> op;
    cout << endl;
    cout << "Hasilnya ialah: " << kalkulator(a, b, op) << endl;
    cout << "Ingin melanjutkan hubungan? (Y/N)?";
    char ans;
    cin >> ans;
    if (ans == 'N')
    {
      cout << "Terimakasih telah menggunakan Kalkulator";
      break;
    }
  }
}

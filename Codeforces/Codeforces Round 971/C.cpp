#include <iostream>
#include <math.h>
#include <stack>

using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long long input;
  cin >> input;
  for (long long i = 0; i < input; i++)
  {
    long long x, y, k;
    long long ans;
    cin >> x >> y >> k;
    long long xcnt = (x + k - 1) / k;
    long long ycnt = (y + k - 1) / k;
    if (ycnt >= xcnt)
    {
      cout << 2 * ycnt << "\n";
      continue;
    }
    cout << 2 * xcnt - 1 << "\n";
  }
}
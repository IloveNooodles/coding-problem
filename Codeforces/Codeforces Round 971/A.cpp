#include <iostream>

using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int input;
  cin >> input;
  for (int i = 0; i < input; i++)
  {
    int a, b;
    cin >> a >> b;
    cout << b - a << "\n";
  }
}
#include <iostream>
#include <stack>

using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int input;
  cin >> input;
  for (int i = 0; i < input; i++)
  {
    int n;
    cin >> n;
    stack<int> s;
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < 4; k++)
      {
        char c;
        cin >> c;
        if (c == '#')
        {
          s.push(k + 1);
        }
      }
    }

    while (!s.empty())
    {
      cout << s.top() << " ";
      s.pop();
    }
    cout << "\n";
  }
}
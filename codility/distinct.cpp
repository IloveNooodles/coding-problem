// you can use includes, for example:
#include <algorithm>
#include <set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A)
{
  int size = A.size();
  set<int> s;
  for (int i = 0; i < size; i++)
  {
    s.insert(A[i]);
  }
  return s.size();
  // Implement your solution here
}
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B)
{
  int size = A.size();
  if (size <= 1)
  {
    return size;
  }
  int ans = 1;
  int prevEnd = B[0];
  for (int i = 1; i < size; i++)
  {
    if (prevEnd < A[i])
    {
      prevEnd = B[i];
      ans++;
    }
  }
  return ans;
}
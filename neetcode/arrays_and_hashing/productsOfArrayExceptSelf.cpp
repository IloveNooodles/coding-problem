class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    vector<int> ans;
    vector<int> prefMult;
    deque<int> suffMult;
    int size = nums.size();
    // compute prefMult
    int mul = 1;
    prefMult.push_back(mul);
    suffMult.push_front(mul);

    for (int i = 1; i < size; i++)
    {
      mul *= nums[i - 1];
      prefMult.push_back(mul);
    }

    mul = 1;
    for (int i = size - 2; i >= 0; i--)
    {
      mul *= nums[i + 1];
      suffMult.push_front(mul);
    }

    for (int i = 0; i < size; i++)
    {
      ans.push_back(prefMult[i] * suffMult[i]);
    }

    return ans;
  }
};
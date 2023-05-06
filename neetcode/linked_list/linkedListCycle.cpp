struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
  bool hasCycle(ListNode *head)
  {
    // Create two node
    ListNode *first = head;
    ListNode *second = head;

    // second node travels twice as fast
    while (second != nullptr && second->next != nullptr)
    {
      first = first->next;
      second = second->next->next;

      if (first == second)
      {
        return true;
      }
    }

    return false;
  }
};

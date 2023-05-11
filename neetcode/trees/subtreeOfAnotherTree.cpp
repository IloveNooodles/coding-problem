#include <stack>

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
  bool isSubtree(TreeNode *root, TreeNode *subRoot)
  {
    // cocokin for every node in root. Traverse in dfs
    return dfs(root, subRoot);
  }

  bool dfs(TreeNode *root, TreeNode *subroot)
  {
    stack<TreeNode *> s;
    s.push(root);
    bool result = false;
    while (!s.empty())
    {
      TreeNode *top = s.top();
      s.pop();
      if (top != nullptr)
      {
        s.push(top->left);
        s.push(top->right);
      }

      result = isSameTree(top, subroot);
      if (result)
        return true;
    }

    return result;
  }

  bool isSameTree(TreeNode *root, TreeNode *subroot)
  {
    if (root == nullptr && subroot == nullptr)
      return true;
    if (root == nullptr || subroot == nullptr)
      return false;
    if (root->val != subroot->val)
      return false;

    bool left = isSameTree(root->left, subroot->left);
    bool right = isSameTree(root->right, subroot->right);

    return left && right;
  }
};
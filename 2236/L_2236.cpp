#include <bits/stdc++.h>
using namespace std;
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
    bool checkTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return false;
        }
        int a = root->left->val;
        int b = root->right->val;
        int c = root->val;
        if (a + b != c)
        {
            return false;
        }
        return true;
    }
};
int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(4);
    root->right = new TreeNode(6);
    Solution solution;
    cout << boolalpha << solution.checkTree(root) << '\n';
    return 0;
}

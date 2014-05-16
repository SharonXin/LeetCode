/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <queue>
using namespace std;
class Solution {
public:
    bool _validBST(TreeNode *root, int min_val, int max_val) {
        if (root == NULL)
            return true;
        if (root->val<=min_val || root->val>=max_val)
            return false;
        return _validBST(root->left, min_val, root->val)&&_validBST(root->right, root->val, max_val);
    }
    bool isValidBST(TreeNode *root) {
        return _validBST(root, -2147483647, 2147483647);
    }
};
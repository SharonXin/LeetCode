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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == NULL && q == NULL)
            return true;
        if (p == NULL)
            return false;
        if (q == NULL)
            return false;
        queue<TreeNode *> l1, l2;
        l1.push(p);
        l2.push(q);
        TreeNode *tmp1;
        TreeNode *tmp2;
        while (!l1.empty() && !l2.empty()) {
            tmp1 = l1.front();
            l1.pop();
            tmp2 = l2.front();
            l2.pop();
            if (tmp1->val != tmp2->val)
                return false;
            if (tmp1->left!=NULL && tmp2->left!=NULL) {
                l1.push(tmp1->left);
                l2.push(tmp2->left);
            }
            else if (!(tmp1->left==NULL&&tmp2->left==NULL))
                return false;
            if (tmp1->right!=NULL && tmp2->right!=NULL) {
                l1.push(tmp1->right);
                l2.push(tmp2->right);
            }
            else if (!(tmp1->right==NULL&&tmp2->right==NULL))
                return false;
        }
        if (l1.empty() && l2.empty())
            return true;
        else
            return false;
    }
};
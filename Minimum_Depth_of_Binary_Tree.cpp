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
    int minDepth(TreeNode *root) {
        if (root == NULL)
			return 0;
		int size, depth = 0;
		queue<TreeNode*> q;
		TreeNode *tmp;
		q.push(root);
		while (!q.empty()) {
			size = q.size();
			depth++;
			while (size--) {
				tmp = q.front();
				q.pop();
				if (tmp->left==NULL && tmp->right==NULL)
					return depth;
				if (tmp->left!=NULL)
					q.push(tmp->left);
				if (tmp->right!=NULL)
					q.push(tmp->right);
			}
		}
    }
};
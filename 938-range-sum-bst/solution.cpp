/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int rangeSum(TreeNode* root, int low, int high, int sum = 0) {
        int newSum = 0;
        if (root) {
            if (root->val >= low && root->val <= high)
                newSum += root->val;
        } else {
            return 0;
        }

        // If the node is smaller than high
        // it makes sense to go right
        if (root->val < high) {
            newSum += rangeSum(root->right, low, high);
        } 
        // If the node is larger than low
        // it makes sense to go left
        if (root->val > low)  {
            newSum += rangeSum(root->left, low, high);
        }

        return newSum;
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return rangeSum(root, low, high);
    }
};
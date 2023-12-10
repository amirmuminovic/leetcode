//
// Created by Amir Muminovic on 10. 12. 2023..
//

#include "main.h"
#include "vector"

using namespace std;

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

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
 private:
  vector<int> inOrder(TreeNode* tn) {
    if (tn == nullptr) {
      return vector<int>{};
    }
    vector<int> elements;
    TreeNode* left = tn->left;
    if (left != nullptr) {
      vector<int> res = inOrder(left);
      for (int x: res) {
        elements.push_back(x);
      }
    }
    elements.push_back(tn->val);
    TreeNode* right = tn->right;
    if (right != nullptr) {
      vector<int> res = inOrder(right);
      for (int x: res) {
        elements.push_back(x);
      }
    }

    return elements;
  }
 public:
  vector<int> inorderTraversal(TreeNode* root) {
    return this->inOrder(root);
  }
};

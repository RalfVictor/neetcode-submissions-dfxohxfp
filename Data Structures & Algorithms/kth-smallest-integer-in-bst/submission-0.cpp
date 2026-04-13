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
public:
    vector<int> temp;
    void ino(TreeNode* root){
        if(!root) return;
        ino(root->left);
        temp.push_back(root->val);
        ino(root->right);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        ino(root);
        return temp[k-1];
    }
};

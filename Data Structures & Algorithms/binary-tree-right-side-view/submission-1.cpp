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
    vector<int> res;
    void ino(TreeNode* root,int l){
        if(!root) return;
        if(res.size()==l) res.push_back(root->val);
        ino(root->right,l+1);
        ino(root->left,l+1);
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        ino(root,0);
        return res;
    }
};

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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot) return true;
        if(!root) return false;
        if(same(root,subRoot)) return true;
        bool left = isSubtree(root->left,subRoot);
        bool right = isSubtree(root->right,subRoot);
        return left||right;
    }

    bool same(TreeNode* root,TreeNode* subRoot){
        if(!root && !subRoot) return true;
        if(root && subRoot && root->val == subRoot->val)
        return same(root->left,subRoot->left) && same(root->right,subRoot->right);
        return false;
    }

};

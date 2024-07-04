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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vec;
        go(root, vec);
        return vec;
    }
    void go(TreeNode* root , vector<int>&vec){
        if(!root)return ;
        go(root->left, vec);
        vec.push_back(root->val);
        go(root->right,vec);
        
    }
};
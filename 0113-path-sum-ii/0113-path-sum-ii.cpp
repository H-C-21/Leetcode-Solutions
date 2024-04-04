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
    vector<vector<int>> ans;

    void helper(TreeNode* root, int targetSum, vector<int>& curr){
        if(root == NULL){
            return ;
        }

        targetSum -= root->val;
        curr.push_back(root->val);

        if(targetSum == 0 && !root->left && !root->right){
            ans.push_back(curr);
        }

        helper(root->left,targetSum,curr);
        helper(root->right,targetSum,curr);
       
        curr.pop_back();

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        helper(root,targetSum,curr);

        return ans;
    }
};
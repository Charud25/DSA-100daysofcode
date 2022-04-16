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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
       
         if (!root) { 
			// checking if the root is null or not.
            return root;
        }
        
        if (root->val >= low && root->val <= high) { 
            // checking root's val should be equal or inside the low and high.
            root->left = trimBST(root->left, low, high);
            root->right = trimBST(root->right, low, high);
            return root;
        }
        
        // if root is less than low its mean all its left childs  than low so discard them
        if(root -> val < low){
            return trimBST(root -> right,low,high);
            
        }
         // if root is greater than high its mean all its right childs greater than it so discard them
            return trimBST(root -> left,low,high);
        
    }
};
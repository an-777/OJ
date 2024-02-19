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
    bool hasPathSum(TreeNode* root, int targetSum) {
    	return dfs(root, 0, targetSum);
    }
private:
	bool dfs(TreeNode * tree, int sum, int target){
		
		if(tree == nullptr){
			return false;
		}
		
		sum+=tree->val;
		
		if(tree->left == nullptr && tree->right == nullptr){
			if(sum == target){
				return true;
			}
		}
		
		return dfs(tree->left,sum,target) || dfs(tree->right,sum,target);
	
	}
};

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
    int search(vector<int>&inorder, int n, int element){
        int ans;
        for(int i=0;i<n;i++){
            if(inorder[i]==element){
                ans = i;
                return ans;
            }
        }
        return -1;
    }
    
    TreeNode* solve(vector<int>&inorder,vector<int>&preorder, int &index, int inorderStart, int inorderEnd, int n){
        
        if((inorderStart>inorderEnd) || index>=n){
            return NULL;
        }
        
        int element = preorder[index++];
        int position = search(inorder,n,element);
        TreeNode* root = new TreeNode(element);
        
        root->left = solve(inorder, preorder, index, inorderStart, position-1, n);
        root->right = solve(inorder, preorder, index, position+1, inorderEnd, n);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
          /* Logic
          get an element from preorder
          search its index in inorder
          build the tree as left renage to root->left
          right range to root->right
          REcursively
          */
        
        int n = inorder.size();
        int index = 0 ;
        return solve(inorder,preorder,index, 0, n-1, n);
        
    }
};

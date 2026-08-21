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
    TreeNode* convertBST(TreeNode* root) {
       if(root==NULL)
       return root;
       TreeNode*cur=root;
       int sum=0;
       while(cur!=NULL){
        if(cur->right==NULL){
            sum+=cur->val;
            cur->val=sum;
            cur=cur->left;
        }
        else{
            TreeNode*succ=cur->right;
            while(succ->left!=NULL && succ->left!=cur){
                succ=succ->left;
            }
            if(succ->left==NULL){
                succ->left=cur;
                cur=cur->right;
            }
            else{
                sum+=cur->val;
                cur->val=sum;
                succ->left=NULL;
                cur=cur->left;
            }
        }
       } 
       return root;
    }
};
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

int dfs(TreeNode* root ,int &cameras)
             {
                 //base case:
           
             if (root==NULL)
             {
                return 1;   //covered..           

             }

int left=dfs(root->left,cameras);       //left check 

int right=dfs(root->right,cameras);     //right check

if(left==-1||right==-1)                 //node ... [postorder - LRN]

{
    cameras++;
    return 0;  //i have camera...
}

else if(left ==1 && right ==1){
    return -1;        //need cameras
}
else{
    return 1; //covered....
}
             }

    int minCameraCover(TreeNode* root) {
          int cameras=0;

            if(  dfs(root,cameras)==-1){
                cameras++;
               
            }

             return cameras;
    }
};
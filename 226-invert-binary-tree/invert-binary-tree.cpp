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

/* // DFS TRAVERSAL ....
TreeNode* dfs(TreeNode* root)
        {
            if (root==NULL)
            return NULL;
        TreeNode* L =dfs(root->left);
        TreeNode* R =dfs(root->right);
        root->left=R;
        root->right=L;
        return root;
        }
    TreeNode* invertTree(TreeNode* root) {
        
if (root==NULL) return root;
dfs(root);
return root;

    }

    */


// BFS TRAVERSAL ...

void bfs (TreeNode* root){
    queue<TreeNode*>Q;
    Q.push(root);

    while(!Q.empty()){
        TreeNode* cur=Q.front();    //nikaloo
        Q.pop();
        TreeNode* temp = cur->left;  //visit nhi.. swapping kro 
        cur->left=cur->right;
        cur->right=temp;   


        if(cur->left!=NULL)          //push ->child
                Q.push(cur->left);
        if(cur->right!=NULL)
                Q.push(cur->right);
    }
    }

 TreeNode* invertTree(TreeNode* root){

if(root==NULL)
    return root;
bfs(root);
return root;

 }
};
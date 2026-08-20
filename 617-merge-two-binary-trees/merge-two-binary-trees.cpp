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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {


        //APPROACH-1 => PREORDER APPROACH ... 
/*
        if (root1==NULL)
        return root2;
        if(root2==NULL)
        return root1;

        root1->val=root1->val+root2->val;

        root1->left=mergeTrees(root1->left,root2->left);
        root1->right=mergeTrees(root1->right,root2->right);
        return root1;
        */
// APPROACH-2 => STACK + ITERATIVE..... 

if (root1==NULL)   //limiting case
return root2;
if(root2==NULL)
return root1;

stack <pair <TreeNode*,TreeNode*>> st;
st.push({root1,root2});
while(!st.empty())
{
    pair<TreeNode*,TreeNode*> p=st.top();
    st.pop();


    TreeNode* t1=p.first;
        TreeNode* t2=p.second;


        if(t1==NULL || t2==NULL)
             continue;

        t1->val=t1->val+t2->val;

        if(t1->left ==NULL)
        t1->left=t2->left;

        else
        st.push({t1->left,t2->left});


        if(t1->right ==NULL)
        t1->right=t2->right;

        else
        st.push({t1->right,t2->right});


}
 return root1;


    }
};
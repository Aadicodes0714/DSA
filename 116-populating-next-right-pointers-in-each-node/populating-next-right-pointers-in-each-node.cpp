/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
     if (root==NULL)
     {
        return NULL;
     }
queue<Node*> q;
q.push(root);
     while(!q.empty())
     {

        int level_size=q.size();
       for (int i=1;i<=level_size;i++)
       {
             
                
                 Node* cur= q.front();
                 q.pop();                            //pop 

                  if(i==level_size)
                  { 
                    cur->next = NULL;
                                                        //process
                  }

                  else
                  {
                      cur->next=q.front();
                  }

                  if (cur->left!=NULL) 
                  {
                  q.push(cur->left);
                  }
                  
                  if (cur->right!=NULL)
                  {
                  q.push(cur->right);
                  }

              
       }
    

     }
return root;

    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

int gcd ( int a ,int b)
{
    if(b==0)
    {
        return a;
    }
    else 
    {
        return gcd(b,a%b);

    }
}

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(head==NULL || head->next == NULL)
        {
            return head;
        }


        ListNode* curr= head;

        while(curr!=NULL && curr->next != NULL)
        {
              int val= gcd(curr->val , curr->next->val);
              ListNode* newnode = new ListNode(val);

              // fit newnode after curr....

           newnode->next = curr->next;  // New node connects to next node
curr->next = newnode;        // Current node connects to new node
curr = newnode->next;        // Move to the next ORIGINAL node
        }

return head;
    }
};
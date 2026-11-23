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
    ListNode* reverseKGroup(ListNode* head, int k) {
                 
            //1. find the length of the group...
ListNode* temp=head;
            int count=0;
            while(count < k)
            {
                if(temp==NULL)   //base case...
                {
                    return head;
                }

                temp=temp->next;
                count++;
            }


            //2. go ahead for rest of the linked list...

          ListNode*  prev= reverseKGroup(temp,k);

// 3. now reverse the curr group and fit...

temp=head;
count=0;
while(count< k )
{
    ListNode* nxt =temp->next;

    temp->next = prev;

    prev=temp;

    temp=nxt;
    count++;
}

return prev;

    }
};
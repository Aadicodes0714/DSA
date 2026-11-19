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
    int pairSum(ListNode* head) {
        // find middle node....

        int maxsum = INT_MIN;

           ListNode* slow=head;
                      ListNode* fast=head;
           ListNode* prev;

            while(fast!=NULL && fast->next !=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }

            prev=slow;
            slow=slow->next;
            prev->next=NULL;

            // reverse the second half....


        while(slow!=NULL)
        {
             ListNode *temp = slow-> next;
             slow->next= prev;

             prev=slow;
             slow=temp;

        }

         // Apply 2 pointer approach...

         ListNode *p1= head;
         ListNode *p2= prev;

         while(p2!=NULL)
         {
            int sum=p1->val+p2->val;

            maxsum= max(sum,maxsum);

            p1=p1->next;

            p2=p2->next;

         } 

return maxsum;

    }
};
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
        
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* temp= head;

        if(slow->next==NULL){
            int ans= (head->val) + (head->next->val);
            return ans;
        }

        else{
            
            ListNode* prev= slow;
            ListNode* curr= slow->next;
            ListNode* nel= curr->next;

            prev->next=NULL;
            while(nel!=NULL){

                curr->next=prev;
                prev=curr;
                curr=nel;
                nel=curr->next;

            }

            curr->next=prev;


            while(temp->next!=slow){
                temp=temp->next;
            }

            temp->next= curr;

        }

        ListNode* temp1=head;
        ListNode* temp2=temp->next;

        int sum=0;
        while(temp2!=NULL){
            int k= (temp1->val) + (temp2->val);
            sum= max(sum, k);
            temp1=temp1->next;
            temp2=temp2->next;
        }

        return sum;

    }
};
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

    ListNode* rev(ListNode* head){

        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* prev= head;
        ListNode* curr= head->next;
        ListNode* nxt= curr->next;

        prev->next=NULL;
        while(curr->next!=NULL){

            curr->next= prev;
            prev= curr;
            curr=nxt;
            nxt= curr->next;
        }

        curr->next= prev;
        return curr;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        ListNode* ans = NULL;
        ListNode* t;

        if(k==1){
            return head;
        }

        while(temp2){

            int i=k;
            while(i>1){
                temp2=temp2->next;

                if(temp2==NULL){
                    while(t->next!=NULL){
                        t=t->next;
                    }
                    while(temp1){
                        t->next= temp1;
                        t= t->next;
                        temp1= temp1->next;
                    }
                    return ans;
                }

                i--;
            }

            ListNode* n= temp2->next;
            temp2->next= NULL;
            ListNode* r= rev(temp1);
            if(ans==NULL){
                ans= r;
                t= ans;
            }
            else{
                while(t->next!=NULL){
                    t=t->next;
                }

                t->next=r;
            }
            temp1= n;
            temp2= n;
            
        }

        return ans;

    }
};
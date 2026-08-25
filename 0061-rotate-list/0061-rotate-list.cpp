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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp= head;
        int n=0;

        if(head== NULL){
            return head;
        }

        while(temp!=NULL){
            n++;
            temp=temp->next;
        }

        int m= k%n;

        if(m==0){
            return head;
        }

        int p= n-m;
        temp= head;

        while(p>0){
            head= head->next;
            p--;
        }

        ListNode* res= head;
        while(res->next!=NULL){
            res= res->next;
        }

        while(temp!=head){
            res->next= new ListNode(temp->val);
            res=res->next;
            temp=temp->next;
        }

        return head;

    }
};
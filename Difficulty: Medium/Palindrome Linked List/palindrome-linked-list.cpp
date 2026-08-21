/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        string s="";
        
        while(head){
            s.push_back(head->data);
            head=head->next;
        }
        
        
        int i= 0;
        int j= s.size()-1;
        
        while(i<j){
            if(s[i++]!=s[j--]){
                return 0;
            }
        }
        
        return 1;
    }
};
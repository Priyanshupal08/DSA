/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* addOne(Node* head) {
        // code here
        
        Node* temp= head;
        
        string s="";
        
        while(temp){
            
            // n*=10;
            // n+= temp->data;
            s+=(temp->data+'0');
            temp=temp->next;

        }
        
        
        int k= s.size();
        
        // cout<<s<<endl;
        
        
        if(s[k-1]=='9'){
            
            int i=k-1;
            
            while(i>=0 && s[i]=='9'){
                s[i]='0';
                i--;
            }
            
            if(i<0){
                long n= pow(10,k);
                string z= to_string(n);
                s=z;
            }
            else{
                s[i]++;
            }
        }
        
        else{
            s[k-1]++;
        }
        
        
        // cout<<s<<endl;
        
        
        // long n= stoi(s);
        // n++;
        
        // string s= to_string(n);
        // // cout<<s<<" ";
        
        int i=0;
        
        Node* l;
        temp= head;
        while(temp){
            
            if(temp->next==NULL){
                l=temp;
            }
            
            temp->data= (s[i++]-'0');
            temp=temp->next;

        }
        
        
        if(i<s.size()){
            
            Node* newel= new Node(s[i]-'0');
            l->next=newel;
        }
        
        return head;
        
    }
};
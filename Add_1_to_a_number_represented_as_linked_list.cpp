// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL; 
        Node* next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    Node* addOneUtil(Node* head)
    {
        int carry = 1;
       Node* res=NULL;
       Node* temp=NULL;
       Node* prev=NULL;
       while(head)
       {
           int sum=carry+head->data;
           carry = sum>=10 ? 1 : 0;
           sum=sum%10;
           
           temp = new Node(sum);
           
           if(res==NULL) res=temp;
           else prev->next=temp;
           
           prev=temp;
           head=head->next;
       }
       if(carry) temp->next=new Node(carry);
       return res;
    }
    
    Node* addOne(Node *head) 
    {
       Node* rev_head = reverse(head);
       Node* tempres = addOneUtil(rev_head);
       return reverse(tempres);
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends
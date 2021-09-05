#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  Node(int data)
  {
      this->data=data;
      this->next=NULL;
  }
};

void push(Node** head, int data)
{
    Node* node = new Node(data);
    node->data=data;
    node->next=(*head);
    (*head)=node;
}

void traverse(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}

int main()
{
    Node* head=NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    traverse(head);
    return 0;
}
import java.io.*;
class LinkedList
{
    
static class Node
{
  
  int data;
  Node next;
  Node(int data)
  {
    this.data=data;
    this.next=null;
  }
}

static Node push(Node head, int data)
{
    Node node = new Node(data);
    node.data=data;
    node.next=head;
    head=node;
    return node;
}

static void traverse(Node head)
{
    while(head!=null)
    {
        
        System.out.println(head.data);
        head=head.next;
    }
}

public static void main(String gg[])
{
    Node head=null;
    head=push(head, 1);
    head=push(head, 2);
    head=push(head, 3);
    head=push(head, 4);
    traverse(head);
}

}
/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Insert(Node *head,int data)
{
  // Complete this method
   struct Node* n = new Node;
    n->data=data;
    n->next=NULL;
    if(head==NULL){
        head=n;
        return head;
    }
    else{
        Node* n2;
        n2=head;
    while(n2->next!=NULL){
        n2=n2->next;
    }
    n2->next=n;
    return head;
    }
}

/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
  Node* n=new Node;
  n->data=data;
  if(head==NULL){
  n->next=NULL;
  head=n;
  return head;
  }
  else{
  n->next=head;
  head=n;
  }
return head;
}

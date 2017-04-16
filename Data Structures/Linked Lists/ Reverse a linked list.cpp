/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head==NULL){
        return head;
    }
    else{
        Node *t1=NULL;
        Node *t2=NULL;
    while(head!=NULL){
        t2=head->next;
        head->next=t1;
        t1=head;
        head=t2;
    }
        return t1;
    }
}

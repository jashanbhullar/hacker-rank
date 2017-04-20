/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    int length=0;
    int beg;
    int i=1;
    Node *p;
    p=head;
    while(p!=NULL){
        length++;
        p=p->next;
    }
    beg=length-positionFromTail;
    while(i<beg){
        head=head->next;
        i++;
    }
    return (head->data);
}

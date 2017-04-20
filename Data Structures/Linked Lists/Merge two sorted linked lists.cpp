/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method
    Node* s;
    Node* head;
    if(headA==NULL)
        return headB;
    if(headB==NULL)
        return headA;
    if(headA!=NULL&&headB!=NULL){
        if(headA->data<=headB->data){
            s=headA;
            headA=s->next;
        }
        else{
            s=headB;
            headB=s->next;
        }
    }
    head=s;
    while(headA!=NULL&&headB!=NULL){
        if(headA->data<=headB->data){
            s->next=headA;
            s=headA;
            headA=s->next;
        }
        else{
            s->next=headB;
            s=headB;
            headB=s->next;
        }
    }
    if(headA==NULL)
        s->next=headB;
    if(headB==NULL)
        s->next=headA;
    return head;
}

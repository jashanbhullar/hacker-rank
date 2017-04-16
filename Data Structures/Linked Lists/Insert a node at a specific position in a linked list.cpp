/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node* n=new Node;
    n->data=data;
    n->next=NULL;
    if(position==0){
        if(head==NULL){
            head=n;
        }
        else{
            n->next=head;
            head=n;    
        }
    }
    else
    {
        int i=0;
        Node* t;
        Node* temp;
        temp=head;
    while(i!=(position-1)){
        temp=temp->next;
        i++;
    }
     t=temp->next;
        temp->next=n;
        n->next=t;
        t=NULL;
        delete t;
        temp=NULL;
        delete temp;
    }
    return head;
}

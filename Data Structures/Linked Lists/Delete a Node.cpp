/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node* temp;
    Node* t;
    if(position==0){
        t=head;
        head=t->next;
        delete t;
    }
    else{
        int i=0;
        temp=head;
        while(i!=(position-1)){
            temp=temp->next;
            i++;
        }
        t=temp->next;
        temp->next=t->next;
        delete t;
    }
    
    return head;
}

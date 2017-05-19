/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
*/
Node Insert(Node head,int data ) {
{
  
    Node n = new Node();
    n.data=data;
    n.next=null;
    if(head==null){
        head=n;
        return head;
    }
    else{
        Node n2;
        n2=head;
    while(n2.next!=null){
        n2=n2.next;
    }
    n2.next=n;
    return head;
    }
}
  
}

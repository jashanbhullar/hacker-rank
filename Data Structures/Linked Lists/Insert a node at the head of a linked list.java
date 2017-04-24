/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
*/
Node Insert(Node head,int x) {
    

  
  Node n=new Node();
  n.data=x;
  if(head==null){
  n.next=null;
  head=n;
  return head;
  }
  else{
  n.next=head;
  head=n;
  }
return head;
}

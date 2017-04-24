/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
*/
Node Reverse(Node head) {
    if(head==null){
        return head;
    }
    else{
        Node t1=null;
        Node t2=null;
    while(head!=null){
        t2=head.next;
        head.next=t1;
        t1=head;
        head=t2;
    }
        return t1;
    }
}

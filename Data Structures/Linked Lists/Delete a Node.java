/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
Node Delete(Node head, int position) {
    

    Node temp;
    Node t;
    if(position==0){
        t=head;
        head=t.next;
        t=null;
        System.gc();
    }
    else{
        int i=0;
        temp=head;
        while(i!=(position-1)){
            temp=temp.next;
            i++;
        }
        t=temp.next;
        temp.next=t.next;
       t=null;
        System.gc();
    }
    
    return head;
}

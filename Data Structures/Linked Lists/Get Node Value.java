/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
*/    
int GetNode(Node head,int n) {
    int length=0;
    int beg;
    int i=1;
    Node p;
    p=head;
    while(p!=null){
        length++;
        p=p.next;
    }
    beg=length-n;
    while(i<beg){
        head=head.next;
        i++;
    }
    return (head.data);
}

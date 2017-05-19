/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
*/
int CompareLists(Node headA, Node headB) {
       
    while(headA != null && headB != null){
        if( headA.data != headB.data )
            return 0;
        headA = headA.next;
        headB = headB.next;
    }
    if( headA != null || headB != null )
        return 0;
    return 1;
} 
  

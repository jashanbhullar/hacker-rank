/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
*/

void ReversePrint(Node head) {
    if(head==null)
       return;
    else
        ReversePrint(head.next);
        System.out.println(head.data);
    
} 

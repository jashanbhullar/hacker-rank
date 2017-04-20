/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
static void inOrder(Node root) {
        if(root!=null){
           
        inOrder(root.left);
        System.out.print(root.data+"\t");
        inOrder(root.right);
    }
    
}

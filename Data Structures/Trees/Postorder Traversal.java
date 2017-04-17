/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
static void postOrder(Node root) {
 if(root != null)
    {postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.data+"\t");
     

    }
}

/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
static void preOrder (Node root){
        if (root!= null){
        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
        }}

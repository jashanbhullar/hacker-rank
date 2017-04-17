/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
void postOrder(node* root) {
 if(root != NULL)
    {

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data<<" ";

 }}

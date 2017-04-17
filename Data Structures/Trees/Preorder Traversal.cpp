/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
void preOrder(node* root){


    if (root != NULL)
    {
        cout <<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

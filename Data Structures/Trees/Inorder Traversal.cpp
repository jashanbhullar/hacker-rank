/* Contributer : github.com/Shaurya9619
	   Email : shaurya96gairola@gmail.com
	*/
void inOrder(node* root) {
    
    if(root != NULL)
    {
        inOrder(root->left);
        cout << root->data <<" ";
        inOrder(root->right);

    }

}

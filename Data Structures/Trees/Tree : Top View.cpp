/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void left_view(node*);
void right_view(node*);
void top_view(node * root)
{
 left_view(root->left);
    cout<<root->data<<" ";
    right_view(root->right);
}
void left_view(node* root){
    if(root==NULL)
        return;
    left_view(root->left);
    cout<<root->data<<" ";
}
void right_view(node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    right_view(root->right);
}


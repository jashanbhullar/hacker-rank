/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/
/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    node* temp;
    node* n=new node;
    n->data=value;
    n->left=n->right=NULL;
if(root==NULL)
    root=n;
    else{
        temp=root;
        while(temp!=NULL){    
    if(value<temp->data){
        if(temp->left==NULL){
            temp->left=n;
            break;}
        temp=temp->left;
    }
            else if(value>temp->data){
                if(temp->right==NULL){
                    temp->right=n;
                    break;}
                temp=temp->right;
            }
        }
    }

   return root;
}



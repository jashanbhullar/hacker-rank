/*
   Contributer : github.com/Blind Bluffer
   Email : shivank309@gmail.com
*/

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        int leftHeight,rightHeight;
    if (root==NULL)
        return 0;
    if ( !root->left && !root->right)
        return 0;
    leftHeight = height(root->left) + 1;
    rightHeight = height(root->right) + 1;

    if (leftHeight > rightHeight)
        return leftHeight;
    else
        return rightHeight;
}

        
    
  


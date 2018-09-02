/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void top (node *node, bool lefty) {
    if (node != NULL) {
        if (lefty) {
            top (node -> left, lefty);
            cout << node -> data << " ";
        }
        else {
            cout << node -> data << " ";
            top (node -> right, lefty);
        }
    }
}

void top_view(node * root)
{
    if (root != NULL) {
        top (root->left, true);
        cout << root->data << " ";
        top (root -> right, false);
    }  
}

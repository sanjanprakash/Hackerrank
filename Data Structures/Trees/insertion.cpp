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
    if (root == NULL) {
        root = new node;
        root -> data = value;
        root -> left = NULL;
        root -> right = NULL;
    }
    else {
				if (root -> data > value){
					if (root -> left != NULL){
						insert(root -> left, value);
					}
					else {
						root -> left = new node;
                       	root -> left -> data = value;
						root -> left -> left = NULL;
						root -> left -> right = NULL;
					}
				}
				else {
					if (root -> right != NULL){
						insert(root -> right, value);
					}
					else {
						root -> right = new node;
                        root -> right -> data = value;
						root -> right -> left = NULL;
						root -> right -> right = NULL;
					}
				}
				return root;
			}

   return root;
}

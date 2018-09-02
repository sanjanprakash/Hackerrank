
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
  int left, right;
			if (root == NULL) {
				return 0;
			}
			left = height(root -> left);
			right = height (root -> right);
			
			if (left <= right)
				return (right + 1);
			else
				return (left + 1);
}
  

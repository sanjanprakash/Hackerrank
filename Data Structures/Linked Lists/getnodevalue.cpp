/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    int x = 0;
    Node *temp1 = head, *temp2 = head;
    while (x < positionFromTail + 1) {
        temp1 = temp1->next;
        x++;
    }
    while (temp1 != NULL) {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp2->data;
}

/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    if (headA == NULL && headB == NULL)
        return 1;
    else if (headA == NULL && headB != NULL)
        return 0;
    else if (headA != NULL && headB == NULL)
        return 0;
    else {
        Node *tempA = headA, *tempB = headB;
        while (tempA != NULL && tempB != NULL) {
            if (tempA->data != tempB->data)
                break;
            tempA = tempA->next;
            tempB = tempB->next;
        }
        if (tempA == NULL && tempB == NULL)
            return 1;
        else
            return 0;
    }
}

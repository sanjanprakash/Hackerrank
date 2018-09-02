/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node *moveA = headA, *moveB = headB, *prev = NULL, *header;
    int count = 0;
    while (moveA != NULL && moveB != NULL) {
        Node *temp = new Node;
        if (moveA->data < moveB->data) { 
            temp->data = moveA->data;
            moveA = moveA->next;
        }
        else {
            temp->data = moveB->data;
            moveB = moveB->next;
        }
        temp->next = NULL;
        if (prev != NULL)
            prev->next = temp;
        prev = temp;
        if (count == 0)
            header = prev;
        count++;
    }
    if (moveA == NULL) {
        while (moveB != NULL) {
            Node *temp = new Node;
            temp->data = moveB->data;
            temp->next = NULL;
            if (prev != NULL)
            prev->next = temp;
            prev = temp;
            if (count == 0)
                header = prev;
            count++;
            moveB = moveB->next;
        }
    }
    else if (moveB == NULL) {
        while (moveA != NULL) {
            Node *temp = new Node;
            temp->data = moveA->data;
            temp->next = NULL;
            if (prev != NULL)
            prev->next = temp;
            prev = temp;
            if (count == 0)
                header = prev;
            count++;
            moveA = moveA->next;
        }
    }
    return header;
}

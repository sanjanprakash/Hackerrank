/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *curr, *prev, *nxt;
    if (head != NULL) {
        if (head->next != NULL) {
            curr = head->next;
            prev = head;
            prev->next = NULL;
            while (curr != NULL) {
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
            head = prev;
        }
    }
    return head;
}

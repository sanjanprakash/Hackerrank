/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *temp;
    if (position == 0) {
        temp = head;
        head = head->next;
        delete temp;
    }
    else {
        temp = head;
        while (position != 1) {
            temp = temp->next;
            position--;
        }
        Node *del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }
    return head;
}

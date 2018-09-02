/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* RemoveDuplicates(Node *head)
{
  Node *temp = head, *noob;
  while (temp->next != NULL) {
      if (temp->data == temp->next->data) {
          noob = temp->next;
          temp->next = noob->next;
          delete noob;
      }
      else
          temp = temp->next;
  }
  return head;
}

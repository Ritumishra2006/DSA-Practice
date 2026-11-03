#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

void insert(Node *&head, int val, int pos)
{
  Node *newNode = new Node(val);

  // at beginning
  if (pos == 1)
  {
    newNode->next = head;
    head = newNode;
    return;
  }
  Node *temp = head;

  for (int i = 1; i < pos - 1 && temp != NULL; i++)
  {
    temp = temp->next;
  }
  // at any pos

  newNode->next = temp->next;
  temp->next = newNode;
}

void display(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main()
{
  Node *head = NULL;
  insert(head, 10, 1);
  insert(head, 50, 2);
  insert(head, 23, 3);
  insert(head, 90, 2);
  display(head);

  return 0;
}
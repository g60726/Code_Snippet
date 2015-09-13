#include <iostream>
using namespace std;

struct node{
	node* next;
	node* prev;
	int value;
};

void insert(node** head, node* new_node)
{
	node* traverse = *head;
	while (traverse->next != NULL)
	{
		traverse = traverse->next;
	}
	traverse->next = new_node;
	new_node->prev = traverse;
	return;
}

void print_linkedlist(node* head)
{
  node* traverse = head;
  while(traverse)
  {
    cout << traverse->value << endl;
    traverse = traverse->next;
  }
  return;
}

int main(){
  //init
	node* head = new node;
	head->value = 1;
	head->next = NULL;
  node* n1 = new node;
	n1->value = 2;
	n1->next = NULL;

	insert(&head, n1);
  print_linkedlist(head);
}

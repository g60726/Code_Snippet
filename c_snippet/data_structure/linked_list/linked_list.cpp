/*
*  This files contains linked list definition, operation on linked list and common algorithm
*  performed on it
*/

#include <iostream>
using namespace std;

//a node is the most basic unit of a linked list
//a linked list is characterized by a pointer to the first node of the list
struct node
{
  int value;
  node* next;
};
/*
=======================================
==  common operation on linked list
=======================================
*/
void insert(node* head, node* new_node)
{
	//traverse to the last element
	node* traverse = head;
	while(traverse->next != NULL)
	{
	  traverse = traverse->next;
	}
	traverse->next = new_node;
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

void append(node** head, node* new_node)
{
	new_node->next = *head;
	*head = new_node;
	return;
}

void pop(node* head)
{
  node* traverse = head;
	while(traverse->next->next != NULL)
	{
		traverse = traverse->next;
	}
	delete traverse->next;
	traverse->next = NULL;

	return;
}

/*
======================================
==  The client code
======================================
*/

int main(){
	
	//making a new node
	node* head = new node;
	head->value = 1;
	head->next = NULL;

  node* n1 = new node;
	n1->value = 2;
	n1->next = NULL;
  
	node* n2 = new node;
	n2->value = 3;
	n2->next = NULL;

	insert(head,n1);
	insert(head,n2);

	print_linkedlist(head);

}

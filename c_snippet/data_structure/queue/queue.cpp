#include <iostream>
#include "queue.h"
using namespace std;

int main()
{

	Node* h = new Node;
	h->value = 1;
	h->next = NULL;
	
	Node* n1 = new Node;
	n1->value = 2;
	n1->next = NULL;
  
	Node* n2 = new Node;
	n2->value = 3;
	n2->next = NULL; 

	Queue queue;
	queue.enqueue(h);
	queue.enqueue(n1);
	queue.enqueue(n2);
	queue.printQueue();
}

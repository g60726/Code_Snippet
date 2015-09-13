#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
	//Init node
	Node* h = new Node;
	h->value = 1;
	Node* n1 = new Node;
	n1->value = 2;
	//init queue
  Queue queue;
	queue.enqueue(h);
	queue.enqueue(n1);
	queue.printQueue();
}

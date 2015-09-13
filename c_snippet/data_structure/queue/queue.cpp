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
  
	Queue queue;
	queue.enqueue(h);
	queue.enqueue(n1);
	queue.printQueue();
	Node* tmp = queue.dequeue();
	queue.printQueue();
	Node* tmp1 = queue.dequeue();
  cout << "The queue is: " << endl;
	queue.printQueue();
	queue.enqueue(n1);
	queue.printQueue();
	cout << "The value of n1 is: " << tmp1->value << endl;
	if (queue.isEmpty())
		cout << "Empty" << endl;
	else
		cout << "Not Empty" << endl;
}

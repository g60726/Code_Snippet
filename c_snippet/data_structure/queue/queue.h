//using a linked list to implement a queue
#include <iostream>
using namespace std;
struct Node
{
	int value;
	Node* next;
};

class Queue
{
	public: 
		Queue();
		~Queue();
		void enqueue(Node* new_node);
		Node* dequeue();
		bool isEmpty();
		void printQueue();
	private:
		Node* head;
};

Queue::Queue()
{
  head = NULL;
}
Queue::~Queue(){}
void Queue::enqueue(Node* new_node)
{
	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		Node* traverse = head;
		while(traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new_node;
		delete traverse;
	}
	return;
}

Node* Queue::dequeue()
{
	if(head != NULL)
	{
		Node* traverse = head;
		head = head->next;
		traverse->next = NULL;
		return traverse;
	}
	else{
		return NULL;
	}
}

void Queue::printQueue()
{
	Node* traverse = head;
	while(traverse != NULL)
	{
		cout << traverse->value << endl;
		traverse = traverse->next;
	}
	delete traverse;
	return;
}

bool Queue::isEmpty()
{
	if(head == NULL)
		return true;
	else
		return false;
}


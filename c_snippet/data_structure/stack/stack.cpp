#include <iostream>
#include <vector>
#include "stack.h"
using namespace std;

int main()
{
  Node* head = new Node;
	head->value = 1;
	Node* n1 = new Node;
	n1->value = 2;

	Stack stack;

	stack.push(head);
	stack.push(n1);
	stack.printStack();
	Node* foo = stack.pop();
	stack.printStack();
	cout << foo->value << endl;
}

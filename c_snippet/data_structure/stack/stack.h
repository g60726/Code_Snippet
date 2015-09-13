#include <iostream>
#include <vector>
using namespace std;

struct Node
{
  int value;
  Node* next;
};

class Stack
{
  public:
    Stack();
    ~Stack();
    void push(Node* new_node);
    Node* pop();
    bool isEmpty();
		void printStack();
    Node* peek();
  private:
    vector<Node*> v;
};

Stack::Stack()
{
	v.reserve(15);
}

Stack::~Stack()
{

}

void Stack::push(Node* new_node)
{
	v.push_back(new_node);
}

Node* Stack::pop()
{
	if(v.size() > 0)
	{
		int i = v.size() - 1;
		Node* result = v.at(i);
		v.pop_back();
		return result;
	}
	else
	{
		return NULL; 
	}
}

bool Stack::isEmpty()
{
	if(v.size() > 0)
		return false;
	else
		return true;
}

void Stack::printStack()
{
	if(!isEmpty()){
		for(int i = 0; i < v.size() ; i++)
		{
			cout << v.at(i)->value << endl;
		}
	}
	return;
}

Node* Stack::peek()
{
	if(!isEmpty())
	{
		int i = v.size() - 1;
		return v.at(i);
	}
	return NULL;
}






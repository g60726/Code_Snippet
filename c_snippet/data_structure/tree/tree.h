#include <iostream>
using namespace std;

struct tNode
{
	int value;
	tNode* left;
	tNode* right;
};

struct Node //node used in queue
{
  tNode* value;
	Node* next;
};

//Queue Class
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
  return;
}

bool Queue::isEmpty()
{
	if(head == NULL)
		return true;
	else
		return false;
}

//Tree class

class Tree
{
  public:
		Tree();
		~Tree();
		Node* wrapper(tNode* root);
		void preOrder(tNode* root);
		void inOrder(tNode* root);
		void postOrder(tNode* root);
		void levelOrder(tNode* root);
	  int getHeight(tNode* root);
		int getDepth(tNode* node);
		void test();
		void makeSample();
		void visit(tNode* t_node);
	private:
		tNode* root;
		Queue* queue;
};

Tree::Tree()
{
	root = NULL;
	queue = new Queue();
}

Tree::~Tree(){
	delete root;
	delete queue;
}

void Tree::makeSample()
{
	tNode* r = new tNode;
	tNode* l1 = new tNode;
	tNode* l2 = new tNode;
	tNode* l11 = new tNode;
	tNode* l12 = new tNode;
	tNode* l21 = new tNode;

	r->value = 1;
	r->left = l1;
	r->right = l2;

	l1->value = 2;
	l1->left = l11;
	l1->right = l12;

	l2->value = 3;
	l2->left = l21;
	l2->right = NULL;

  l11->value = 4;
	l11->left = NULL;
	l11->right = NULL;

	l12->value = 5;
	l12->left = NULL;
	l12->right = NULL;

	l21->value = 6;
	l21->left = NULL;
	l21->right = NULL;
	
	root = r;
}

Node* Tree::wrapper(tNode* root)
{
	Node* result = new Node;
	result->value = root;
	result->next = NULL;
	return result;
}

void Tree::visit(tNode* t_node)
{
	cout << t_node->value << endl;
}

void Tree::preOrder(tNode* root)
{
	if(root == NULL)
		return;
	visit(root);
	preOrder(root->left);
	preOrder(root->right);
}

void Tree::postOrder(tNode* root)
{
	if(root == NULL)
		return;
	postOrder(root->left);
	postOrder(root->right);
	visit(root);
}

void Tree::inOrder(tNode* root)
{
	if(root == NULL)
		return;
	inOrder(root->left);
	visit(root);
	inOrder(root->right);
}

void Tree::levelOrder(tNode* root)
{
  if(root == NULL)
		return;

	Node* n_root = wrapper(root);
	queue->enqueue(n_root);
	while(!queue->isEmpty())
	{
		tNode* temp = queue->dequeue()->value;
		if(temp->left != NULL)
		{
			Node* n_left = wrapper(temp->left);
			queue->enqueue(n_left);
		}
		if(temp->right != NULL)
		{
			Node* n_right = wrapper(temp->right);
			queue->enqueue(n_right);
		}
		visit(temp);	
	}
	return;
}

void Tree::test()
{
	levelOrder(root);
}

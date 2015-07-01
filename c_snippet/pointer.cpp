#include <iostream>
using namespace std;
int main(){
  //simple pointer initiation 
	int x;
	int* p_x;
	p_x = &x;
	x = 4;
	cout << "The value of x is " << *p_x << endl;
	cout << "The memory address of x is" << p_x <<endl;

	//generate pointer from heap

	int* p_number = new int;
	*p_number = 5;
	cout << "The value of number is " << *p_number << endl; 
  
	//free the memory
	delete p_number; //only free up the memory allocated from new

  /*
	* Struct 
	*/
	//struct definition
	struct Node
	{
		int number; 
	}; 
	//initiate the note 

	Node example_node;
	example_node.number = 5; 
	cout << "Number (within the node) is : " << example_node.number <<endl; 
	
	//pointer to a struct

	Node* p_node;
	p_node = &example_node;
	p_node->number = 6;
	cout << "Number (within the node referred by pointer) is : " << example_node.number <<endl;

	//pointer created by using new
	Node* p_node2 = new Node;
	p_node2->number = 12;
	cout << "Number in p_node2 is: " << p_node2->number << endl;
	delete p_node2;


	return 1;
}

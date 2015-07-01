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

	return 1;
 
}

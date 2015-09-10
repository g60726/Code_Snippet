/*
*  This file talks about the array data strucuture
*
*
*/

#include <iostream>

using namespace std;

void print_array(char arg[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arg[i] << endl;
  }
  return;
}

int main()
{
	//initialize an empty array that stores 6 int 
	int foo[6]; 

  //intialize an array with pre defined element
	char char_foo[3] = {'c','b','e'};

  //no equal sign is needed for arrat init
	float float_foo[3] = {1.23,4.5,6.7};

	//accessing its element at index 1
	cout << char_foo[1] << endl;

	//change an elemnet at index 1
	char_foo[1] = 'r';

  //multi-dimensional array, this case 2 by 2 
  int multi_int[2][2];

	//three-dimensional and more array, following the convention of [][][]....
	int three_dimensional[3][3][3]; 

	//when passing as an argument
  print_array(char_foo,3);

	//pointer arithmetic with array declaration
	int set[5] = {1,2,3,4,5};
	int* ptr = set; //calling an array by its name gives the pointer to its first element  
  
	//printing out each element by using pointer arithmetic
	for(int i = 0; i < 5; i++)
	{
		cout << *ptr << endl;
		ptr++;
	}

	//tips on pointer arithmetic, *++ptr do these two things simultanesouly in order : 1. increment the pointer, access its value
	//                            *ptr++ : 1, access its value, 2. increment the pointer
}



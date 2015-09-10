#include <iostream>
using namespace std;

//function header

int find_max(int x, int y); 

int main(){
	cout << "Hello World!\n";
	
	//basic variables
	int x; // integer
  	char c; //character type
  	bool t; //boolean
	float f; //decimal
	double d; //double 

	//assignment
	x = 13;
	c = 'b'; 

	cout << "The character is: " << c << endl;
  	cout << "The number is: " << x << endl; 
  
	//if statement
  	int z = 5;
	int y = 3;

	if ( z > y)
		cout << "X is bigger than Y" <<endl;
  	else if ( z < y)
		cout << "X is smaller than y" << endl;
	else 
		cout << "X is equal to Y" << endl; 

	//for loop
	const int max = 55; 
 	for(int i = 0 ; i < max ; i ++)
		cout << "Counter is : " << i << endl;

  	//while loop
	int j = 0;
	while(j < max){
		cout << "In the while loop " << j << endl;
		j++; 
	}

	//using function 
	cout << "The max is: " << find_max(4,8) << endl;
	

	//using case 
	int w;
	switch(w){
		case 1 :
			break;
		case 2 :
			break;
		case 3 :
		  break;
		default : 
			break;
	}

	
	return 1;
}

int find_max(int x, int y ){
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return x;
}

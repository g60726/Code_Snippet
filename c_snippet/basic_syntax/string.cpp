#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//array
  int arr[10]; //create an empty array with 10 elements
  int arr2[3] = {3,5,7}; 

	//no built in type for string, so the following can be used as string
	int str_leng = 10;
	char string[str_leng + 1]; //one character for end of string
  char* p_string; 
	p_string = string; // no & needed
  
	char input[11];
	// taking user input
	cout << "Please enter a string no larger than 9 characters\n" ;
	cin.getline(input, 11, '\n');
	cout << "Your input is : " << input << endl;
	return 1;
}

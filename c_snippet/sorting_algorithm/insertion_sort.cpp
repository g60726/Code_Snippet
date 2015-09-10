#include <iostream>
using namespace std;

void insertion_sort(int* p_arr); 

int main(){
	//mock array 
	int arr[8] = {1,2,3,4,5,6,7,8};
	insertion_sort (arr);
	//printing out the output 
	int length = sizeof(arr)/sizeof(*arr);
	for(int i = 0; i < length; i++ )
		cout << arr[i] << endl;
}

void insertion_sort(int* p_arr){
	
}

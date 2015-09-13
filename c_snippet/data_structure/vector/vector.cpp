#include <iostream>
#include <vector>
using namespace std;

int main(){
  //init a vector of int type
	vector<int> v;
	v.reserve(10); //make room for 10 integers, but will not initiate it

	for(int i =0 ; i < 5 ; i++)
	{
		v.push_back(i); //appending to the array
	}
  
	//accessing
	cout << v.at(1) << endl;

  //setting
  v[1] = 89;
	cout << v.at(1) << endl;

	//size() returns the size of the vector
	cout << v.size() << endl;
	// capacity returns the size of the vector before relocation
	cout << v.capacity() << endl;
  // resize will actually change the size of elements, instantize to its default value

}

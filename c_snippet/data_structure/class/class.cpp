#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

//client code
int main()
{ 
  Car yaris("X1");
	yaris.setSpeed(50);
	int speed = yaris.getSpeed();
	cout << "The speed is: " << speed << endl;
	cout << "The engine is: " << yaris.getEngine() << endl;
}

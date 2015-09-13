//class definition
#include <string>
using namespace std;
class Car 
{
  public:
    Car(string engine);
    ~Car();
    void setSpeed(int speed);
    int getSpeed();
    string getEngine();

  protected:
    int speed;
    int passenger;

  private:
    string engine;
};

Car::Car(string uengine)
{
  engine = uengine;
}

Car::~Car(){}

void Car::setSpeed(int uspeed)
{
  speed = uspeed; //note that the parameter name can't be conflict with the attribute's name
} 

int Car::getSpeed()
{
  return speed;
}

string Car::getEngine()
{
  return engine;
}


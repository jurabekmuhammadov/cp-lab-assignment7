#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Person
{
private:
  string name;
  int age;
  float height;

public:
  Person(string pName, int pAge, float pHeight) : name(pName), age(pAge), height(pHeight)
  {
    cout << "Person " << name << " created!" << endl;
  }

  void setDetails(string pName, int pAge, float pHeight)
  {
    this->name = pName;
    this->age = pAge;
    this->height = pHeight;
  }

  void displayDetails()
  {
    cout << "Person info:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
  }

  float calculateBMI(float weight)
  {
    float heightInMeters = height / 100.0;
    return weight / pow(heightInMeters, 2);
  }

  ~Person()
  {
    cout << "Person " << name << " destroyed!" << endl;
  }
};

int main()
{
  Person person1("Jurabek", 18, 178.8);
  person1.displayDetails();
  cout << "Person's BMI is " << person1.calculateBMI(65.5) << endl;
  return 0;
}
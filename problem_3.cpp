#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Base
{
public:
  Base()
  {
    cout << "Base class has been created!" << endl;
  }
  virtual void display()
  {
    cout << "Base class displayed" << endl;
  }
};

class Derived1 : public Base
{
public:
  Derived1()
  {
    cout << "Derived1 class has been created!" << endl;
  }
  void display() override
  {
    cout << "Derived1 class displayed" << endl;
  }
};

class Derived2 : public Base
{
public:
  Derived2()
  {
    cout << "Derived2 class has been created!" << endl;
  }
  void display() override
  {
    cout << "Derived2 class displayed" << endl;
  }
};

int main()
{
  Derived1 d1;
  Derived2 d2;
  d1.display();
  d2.display();
  return 0;
}
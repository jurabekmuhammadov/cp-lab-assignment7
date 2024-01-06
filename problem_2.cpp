#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
public:
  Animal()
  {
    cout << "Animal is created!" << endl;
  }
  virtual void makeSound() const
  {
    cout << "Generic animal sound" << endl;
  }
  // ~Animal()
  // {
  //   cout << "Animal has been destroyed!" << endl;
  // }
};

class Dog : public Animal
{
public:
  Dog()
  {
    cout << "Dog is created!" << endl;
  }
  void makeSound() const
  {
    cout << "Dog barks: Woof! Woof!" << endl;
  }
  // ~Dog()
  // {
  //   cout << "Dog has been destroyed!" << endl;
  // }
};

class Cat : public Animal
{
public:
  Cat()
  {
    cout << "Cat is created" << endl;
  }
  void makeSound() const override
  {
    cout << "Cat meows: Meow! Meow!" << endl;
  }
  // ~Cat()
  // {
  //   cout << "Cat has been destroyed!" << endl;
  // }
};

int main()
{
  Dog myDog;
  Cat myCat;

  myDog.makeSound();
  myCat.makeSound();

  return 0;
}
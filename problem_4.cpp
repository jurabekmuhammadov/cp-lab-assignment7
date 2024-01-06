#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Shape
{
public:
  virtual void draw() const
  {
    cout << "Drawing a generic shape" << endl;
  }
};

class Circle : public Shape
{
public:
  void draw() const override
  {
    cout << "Drawing a circle" << endl;
  }
};

class Square : public Shape
{
public:
  void draw() const override
  {
    cout << "Drawing a square" << endl;
  }
};

int main()
{
  vector <Shape*> shapes;

  Circle circle;
  Square square;

  shapes.push_back(&circle);
  shapes.push_back(&square);

  for (const auto &shape : shapes)
  {
    shape->draw();
  }

  return 0;
}

#include <iostream>

using namespace std;

class MinFrom2Numbers
{
public:
  int a, b;
  void minFrom2Numbers()
  {
    if (a < b)
    {
      cout << "value of a is less than b.";
    }
    else
    {
      cout << "value of b is less than a.";
    }
  }
};

int main()
{
  MinFrom2Numbers obj;

  cout << "enter value of a :";
  cin >> obj.a;

  cout << "enter value of b :";
  cin >> obj.b;

  obj.minFrom2Numbers();
}
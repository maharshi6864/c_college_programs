#include <iostream>

using namespace std;

class MaxFrom3Numbers
{
public:
  int a, b, c;
  void maxFrom3Numbers()
  {
    if (a > b)
    {
      if (a > c)
      {
        cout << "a is greater than every number entered !";
      }
      else
      {
        cout << "c is greater than every number entered !";
      }
    }
    else
    {
      if (b > c)
      {
        cout << "b is greater than every number entered !";
      }
      else
      {
        cout << "c is greater than every number entered !";
      }
    }
  }
};

int main()
{
  MaxFrom3Numbers obj;

  cout << "enter value of a :";
  cin >> obj.a;

  cout << "enter value of b :";
  cin >> obj.b;

  cout << "enter value of c :";
  cin >> obj.c;

  obj.maxFrom3Numbers();
}
#include <iostream>

using namespace std;

int main()
{
  string str1 = "Hello ";
  string str2 = "world";
  string str3 = str1 + str2;
  cout << str3;
  str1.append(str2);
  cout << endl
       << str1;
  return 0;
}
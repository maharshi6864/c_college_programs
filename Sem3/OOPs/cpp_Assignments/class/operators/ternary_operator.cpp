#include <iostream>

using namespace std;

class TernaryOperator
{
public:
    int a, b;
};

int main()
{
    TernaryOperator ter;
    cout << "enter value of a : ";
    cin >> ter.a;

    cout << "enter value of b : ";
    cin >> ter.b;

    (ter.a > ter.b) ? cout << "value of a is greater than b \n" : cout << "value of b is greater than a \n";
}

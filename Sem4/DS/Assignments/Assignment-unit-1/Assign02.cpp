#include <iostream>

using namespace std;

void displayArrayElements(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "" << *arr << endl;
    arr++;
  }
}

int main()
{
  int arr[3] = {1, 0, 0};

  int sizeOfTheArray = sizeof(arr) / sizeof(arr[0]);

  displayArrayElements(arr, sizeOfTheArray);
  return 0;
}
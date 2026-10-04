#include <iostream>

using namespace std;

int main()
{
  int age = 21;
  char initial = 'J';
  bool isStudent = true;
  double height = 5.9;

  cout << "Age: " << age << endl;
  cout << "Initial: " << initial << endl;
  cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
  cout << "Height: " << height << endl;

  return 0;
}
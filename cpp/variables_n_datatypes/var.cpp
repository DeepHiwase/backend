#include <iostream>

using namespace std;

int main()
{
  // declaration
  int b; // when run - prints garbage value
  // defination & initialization
  int c = 3; // when run - prints 3

  // manipulation & updation
  c = 4;

  // primitive data types
  int age = 21;       // 4 bytes
  char initial = 'J'; // 1 byte
  // char initial = "J";  ❌
  bool isStudent = true;   // 1 byte
  bool isStudent1 = 1;     // 1 byte
  bool isStudent2 = false; // 1 byte
  bool isStudent3 = 0;     // 1 byte
  float price = 99.99;     // 4 bytes
  double pi = 3.14159;     // 8 bytes
  // void

  // derived data types -> array, pointers, references
  // user defined data types -> class, structure, union, enum (enumerations)
  // NOTE: The actual size of these data types can be dependent on the system architecture.

  cout << "Age: " << age << endl;
  cout << "Initial: " << initial << endl;
  cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
  cout << "Value of pi: " << pi << endl;

  // sizeof operator - in bytes
  cout << "Size of int: " << sizeof(int) << " bytes" << endl;
  cout << "Size of char: " << sizeof(char) << " bytes" << endl;
  cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
  cout << "Size of float: " << sizeof(float) << " bytes" << endl;
  cout << "Size of double: " << sizeof(double) << " bytes" << endl;

  cout << sizeof(age) << endl;
  cout << sizeof(initial) << endl;
  cout << sizeof(isStudent) << endl;
  cout << sizeof(isStudent1) << endl;
  cout << sizeof(isStudent2) << endl;
  cout << sizeof(isStudent3) << endl;
  cout << sizeof(price) << endl;
  cout << sizeof(pi) << endl;

  return 0;
}
#include <iostream> // header file // preprocessor directive // iostream -> input output stream

using namespace std;

int main()
{
  cout << "Hello, World!" << endl; // << inserts so we can say insertion operator / endl -> prints newline which moves cursor to next line

  // return EXIT_SUCCESS;

  cerr << "Something went wrong" << endl;
  return EXIT_FAILURE; // return 0 -> successfully executed else anything return means unsuccessful excution
}

// 0 or EXIT_SUCCESS -> successfully executed
// anything else or EXIT_FAILURE -> unsuccessful execution
// endl or '\n'
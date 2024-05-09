#include <iostream>
using namespace std;

//Calculator designed by Ibtisam Afzal

int main() {
  int num1, num2;
  char op;
  cout << "Enter first number: ";
  cin >> num1;

  cout << "Select the Operation (+,-,*,\): " << endl;
  cin >> op;
  cout << "Enter Second number: ";
  cin >> num2;

  if (op == '+') {
    cout << "Result: " << num1 + num2 << endl;
  } 
  
  else if (op == '-') {
    cout << "Result: " << num1 - num2 << endl;
  } 
  
  else if (op == '*') {
    cout << "Result: " << num1 * num2 << endl;
  } 
  
  else if (op == '/') {
    cout << "Result: " << num1 / num2 << endl;
  }

  else {
    cout << "Invalid Operator!";
  }
  return 0;
}

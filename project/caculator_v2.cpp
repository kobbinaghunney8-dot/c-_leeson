#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  char op;

  cout << "Enter your number: ";
  cin >> num1;
  cout << "Enter your number: ";
  cin >> num2;
  cout << "Enter your operator: ";
  cin >> op;

  int result;

  if (op == '+') {
    result = num1 + num2;
    cout << "===> " << result << endl;
  } else if (op == '-') {
    result = num1 - num2;
    cout << "===> " << result << endl;
  } else if (op == '*') {
    result = num1 * num2;
    cout << "===> " << result << endl;
  } else if (op == '/') {
    result = num1 / num2;
    cout << "===> " << result << endl;
  } else if (op == '%') {
    result = num1 % num2;
    cout << "===> " << result << endl;
  }

  return 0;
}

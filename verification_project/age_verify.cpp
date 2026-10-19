#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  int age;

  cout << "Enter your name: ";
  getline(cin, name);

  cout << "Enter your age: ";
  cin >> age;

  if (age >= 18) {
    cout << "Your Verify " << name << endl;
  } else {
    cout << "Sorry " << name << " Your not Verify" << endl;
  }

  return 0;
}

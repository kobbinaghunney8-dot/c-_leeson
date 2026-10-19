#include <iostream>
using namespace std;

int main() {
  string pronoun, color, celebrity;

  cout << "Enter your pronoun: ";
  getline(cin, pronoun);

  cout << "Enter your color: ";
  getline(cin, color);

  cout << "Enter your celebrity: ";
  getline(cin, celebrity);

  cout << pronoun << " are Red" << endl;
  cout << color << " are blue" << endl;
  cout << "I Love " << celebrity << endl;
}

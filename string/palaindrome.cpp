#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string name;
    name = "Melly";

    reverse(name.begin(), name.end());

    cout << name ;
}

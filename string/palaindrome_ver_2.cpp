#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string word;
    cout << "Enter your word: ";
    getline(cin,word);

    string reversed;
    reversed = word; 
    reverse(reversed.begin(), reversed.end());

    if (reversed == word){
        cout << true << endl;
    } else {
        cout << false << endl;
    }
}

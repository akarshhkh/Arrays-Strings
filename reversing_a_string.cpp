/*
akarsh khot
23070123012
Aim - take input string from the user and reverse the string which is entered by the user.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int i;

    cout << "Please Enter Your String to reverse: ";
    cin >> word;

    int length = word.length();
    for (i = length - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << endl;

    return 0;
}

/*
OUTPUT
Please Enter Your String to reverse: ayush
hsuya

Please Enter Your String to reverse: goodmorning
gninromdoog
*/

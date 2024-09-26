//akarsh khot
//23070123012
//Aim - To find the minimum and the maximum number in the given array.

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {1, 5, 19, 51, 8};
    int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < 5; i++) {
        if (max < marks[i]) {
            max = marks[i];
        }
    }

    for (int j = 1; j < 5; j++) {
        if (min > marks[j]) {
            min = marks[j];
        }
    }

    cout << "Maximum is " << max << endl;
    cout << "Minimum is " << min << endl;

    return 0;
}

/*
OUTPUT 
Maximum is 51
Minimum is 1
*/

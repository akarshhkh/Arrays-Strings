//akarsh khot
//23070123012
//Aim - To find a number in the given array .

#include<iostream>
using namespace std;

int main() {
    int n = 6;
    int marks[n] = {10, 20, 30, 40, 50, 60};
    int key = 30;
    int sum = 0;
    int avg;
    
        for (int i = 0; i < n; i++) {
        if (key == marks[i]) {
            cout << "Key found at location: " << i << endl;
            break;
        }
    }
    for (int j = 0; j < n; j++) {
        sum += marks[j];
    }
    
    avg = sum / n;
    
    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;
    
    return 0;
}


/*
OUTPUT
Key found at location: 2
Sum is 210
Average is 35
*/

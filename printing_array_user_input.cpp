//Name: akarsh khot
//PRN: 230070123012
//Aim: Printing elements of an array.

#include <iostream>
using namespace std;
int main() { 
int n;

cout << "Enter the size of array: ";
cin >> n;
int x[n];
cout << "Enter the numbers:";
int a = 0; 
while (a < n)
{cin >> x[a];
     a= a+1;
}
cout <<"The output is:";
cout <<endl;
for(int i = 0;i<n;i++)
{cout << x[i];
cout<< endl;

}
    return 0;
}

/*
OUTPUT
Enter the size of array: 5
Enter the numbers:6
49
5
6
7
The output is:
6
49
5
6
7
*/

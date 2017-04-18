/*
Answer by Fabio Pedruci

Exercise 2.24
Write a program that reads an integer and determines and prints whether
it’s odd or even.
*/

#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "Insert a number:" << endl;
    cin >> num;
    num = num % 2;
    if (num == 0){
        cout << "The number is even.";
    }
    else {
        cout << "The number is odd.";
    }
    return 0;
}





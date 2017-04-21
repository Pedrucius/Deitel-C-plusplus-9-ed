/*
Answer by Fabio Pedruci

Exercise 2.25
Write a program that reads in two integers and determines and prints if the first
is a multiple of the second.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Insert two numbers (other than 0):" << endl;
    cin >> num1 >> num2;
    cout << num1 << ((num1 % num2 == 0) ? " is " : " is not ") << "a multiple of " << num2 << endl;
    return 0;
}






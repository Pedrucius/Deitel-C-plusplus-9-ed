/*
Answer by Fabio Pedruci

Exercise 2.16
Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, and quotient of the two numbers.

In this exercise we won't check any invalid or valid input. 
*/

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    cout << "Enter Two Numbers:" << endl;
    cin >> num1 >> num2;
    cout << "The sum of the two numbers is: " << num1 + num2 << endl;
    cout << "The product of the two numbers is: " << num1 * num2 << endl;
    cout << "The difference between the two numbers is: " << num1 - num2 << endl;
    cout << "The quotient between the two numbers is: " << num1 / num2 << endl;
    return 0;
}



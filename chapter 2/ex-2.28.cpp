/*
Answer by Fabio Pedruci

Exercise 2.28
Write a program that inputs a five-digit integer, separates the integer
into its digits and prints them separated by three spaces each.
*/

#include <iostream>

using namespace std;

int main()
{
    int number = 0; //the variable that will receive the input
    int num1, num2, num3, num4, num5; //the numbers (leftmost is 5, rightmost = 1)

    cout << "Please, type a five-digit integer:" << endl;
    cin >> number;

    num1 = number % 10;
    num2 = (number % 100)/10;
    num3 = (number % 1000)/100;
    num4 = (number % 10000)/1000;
    num5 = (number % 100000)/10000;

    /*
    You can also do:

    num1 = number % 10;
    number /= 10; //divide number by 10 and replace value in the same variable
    num2 = number % 10;
    number /= 10;
    num3 = number % 10;
    number /= 10;
    num4 = number % 10;
    number /= 10;
    num5 = number % 10;

    */

    cout << num5 << "   " << num4 << "   " << num3 << "   " << num2 << "   " << num1 << endl;

    return 0;
}


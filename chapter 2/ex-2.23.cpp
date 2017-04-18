/*
Answer by Fabio Pedruci

Exercise 2.23
Write a program that reads in five integers and determines
and prints the largest and the smallest integers in the group. Use only the programming techniques
you learned in this chapter.
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, smallest, largest;
    cout << "Insert 5 numbers" << endl;
    cin >> num1;
    smallest = num1; //get the value of first number, and compare with each input
    largest = num1; //get the value of first number, and compare with each input

    cin >> num2;
    if (largest < num2){
        largest = num2; //if input is larger than largest, it will replace the correct value. Same for smallest.
    }
    else if (smallest > num2){
        smallest = num2;
    }

    cin >> num3;
    if (largest < num3){
        largest = num3;
    }
    else if (smallest > num3){
        smallest = num3;
    }

    cin >> num4;
    if (largest < num4){
        largest = num4;
    }
    else if (smallest > num4){
        smallest = num4;
    }

    cin >> num5;
    if (largest < num5){
        largest = num5;
    }
    else if (smallest > num5){
        smallest = num5;
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}




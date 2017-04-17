/*
Answer by Fabio Pedruci

Exercise 2.19
Write a program that inputs three integers from the keyboard
and prints the sum, average, product, smallest and largest of these numbers.
*/

#include <iostream>

//We can define a MIN comparison and a MAX comparison - using ternary operator, but this is not the content of this chapter.
//Use like this:
//#define MIN (a,b) ((a < b) ? a : b)
//#define MAX (a,b) ((a < b) ? b : a)

//In the smallest you can use MIN(num1, MIN(num2, num3));
//In the largest you can use MAX(num1, MAX(num2, num3));

//This way, you don't have to compare the numbers at each input.

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;
    int smallest = 0;
    cout << "Please enter three numbers:" << endl;
    cin >> num1;
    largest = num1;
    smallest = num1;
    cin >> num2;
    if (largest < num2){
        largest = num2;
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

    cout << "The sum is: " << num1 + num2 + num3 << endl;
    cout << "The average is: " << (num1 + num2 + num3)/3 << endl;
    cout << "The product is: " << num1 * num2 * num3 << endl;
    cout << "The smallest is: " << smallest << endl;
    cout << "The largest is: " << largest << endl;

    return 0;
}






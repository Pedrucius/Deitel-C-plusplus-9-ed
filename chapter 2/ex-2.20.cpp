/*
Answer by Fabio Pedruci

Exercise 2.20
Write a program that reads in the radius of a circle as an integer and prints
the circle’s diameter, circumference and area. Use the constant value 3.14159 for π.
Do all calculations in output statements. [Note: In this chapter, we’ve discussed only
integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that can
have decimal points.]
*/

#include <iostream>

using namespace std;

const double PI = 3.14159;

int main()
{
   int radius = 0;

   cout << "Insert radius:" << endl;
   cin >> radius;
   cout << "Diameter: " << 2 * radius << endl;
   cout << "Circunference: " << PI * (2 * radius) << endl;
   cout << "Area: " << PI * (radius * radius) << endl;

    return 0;
}


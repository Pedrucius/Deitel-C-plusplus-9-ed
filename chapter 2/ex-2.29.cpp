/*
Answer by Fabio Pedruci

Exercise 2.29
Using the techniques of this chapter, write a program that calculates the squares and
cubes of the integers from 0 to 10.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Integer\tSquare\tCube" << endl;
    cout << 0 << "\t" << 0 << "\t" << 0 << endl;
    cout << 1 << "\t" << 1 << "\t" << 1 << endl;
    cout << 2 << "\t" << 2*2 << "\t" << 2*2*2 << endl;
    cout << 3 << "\t" << 3*3 << "\t" << 3*3*3 << endl;
    cout << 4 << "\t" << 4*4 << "\t" << 4*4*4 << endl;
    cout << 5 << "\t" << 5*5 << "\t" << 5*5*5 << endl;
    cout << 6 << "\t" << 6*6 << "\t" << 6*6*6 << endl;
    cout << 7 << "\t" << 7*7 << "\t" << 7*7*7 << endl;
    cout << 8 << "\t" << 8*8 << "\t" << 8*8*8 << endl;
    cout << 9 << "\t" << 9*9 << "\t" << 9*9*9 << endl;
    cout << 10 << "\t" << 10*10 << "\t" << 10*10*10 << endl;
    return 0;
}



/*
Answer by Fabio Pedruci

Exercise 2.26
Display the following checkerboard pattern with eight output
statements, then display the same pattern using as few statements as possible.
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

*/

#include <iostream>

using namespace std;

#define A "* * * * * * * *\n"
#define B " * * * * * * * *\n"

int main()
{
    cout << "* * * * * * * *" << endl; //start of 8 statements
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *\n" << endl;

    cout << A << B << A << B << A << B << A << B; //single statement, using 2 constants

    return 0;
}







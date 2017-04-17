/*
Answer by Fabio Pedruci

Exercise 2.09
Write a single C++ statement or line that accomplishes each of the following:
a) Print the message "Enter two numbers".
b) Assign the product of variables b and c to variable a.
c) State that a program performs a payroll calculation (i.e., use text that helps to document
a program).
d) Input three integer values from the keyboard into integer variables a, b and c.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c; //not a good practice, but for this exercise, it's ok.
    cout << "Enter Two Numbers:" << endl;
    cin >> b >> c;
    a = b * c;
    cout << "This program performs a a payroll calculation.\n";
    cin >> a >> b >> c;
    return 0;
}

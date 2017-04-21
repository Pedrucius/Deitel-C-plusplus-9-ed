/*
Answer by Fabio Pedruci

Exercise 2.27
Write a program that prints the integer equivalent of a character typed at the keyboard. Store the input in a
variable of type char. Test your program several times using uppercase letters, lowercase letters, digits
and special characters (like $).
*/

#include <iostream>

using namespace std;

int main()
{
    char a; //This variable will hold the character typed by the user
    cout << "Please, type any character from keyboard:" << endl;
    cin >> a;

    cout << "This is the integer value of the character " << a << ": " << static_cast<int>(a) << endl;

    return 0;
}

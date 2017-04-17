/*
Answer by Fabio Pedruci

Exercise 2.18
Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words "is larger." If the
numbers are equal, print the message "These numbers are equal."
*/

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    cout << "Please enter two numbers:" << endl;
    cin >> num1 >> num2;
    if (num1 == num2){
        cout << "These numbers are equal";
    }
    else if (num1 > num2){
        cout << num1 << " is larger";
    }
    else {
        cout << num2 << " is larger";
    }

    return 0;
}





/*
Answer by Fabio Pedruci

Exercise 2.30
Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can evaluate
his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater
*/

#include <iostream>

using namespace std;

int main()
{
    double weight = 0;
    double height = 0;

    cout << "Please insert your weight (kilograms):" << endl;
    cin >> weight;
    cout << "Please insert your height (meters):" << endl;
    cin >> height;

    cout << "Your BMI is: " << weight / (height*height) << endl;
    cout << "BMI VALUES\n";
    cout << "Underweight: less than 18.5\n";
    cout << "Normal: between 18.5 and 24.9\n";
    cout << "Overweight: between 25 and 29.9\n";
    cout << "Obese: 30 or greater\n";

    return 0;
}




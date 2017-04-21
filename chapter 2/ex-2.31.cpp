/*
Answer by Fabio Pedruci

Exercise 2.31
Create an application that calculates your daily driving cost, so that you can estimate how much money
could be saved by car pooling, which also has other advantages such as reducing carbon emissions and
reducing traffic congestion. The application should input the following information and display
the user’s cost per day of driving to work:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.
*/

#include <iostream>

using namespace std;

int main()
{
    double totalMiles = 0;
    double costGallon = 0;
    double milesGallon = 0;
    double parkingFees = 0;
    double tollsDay = 0;
    double drivingCost = 0;

    cout << "Please insert the Total Miles Driven (per day):" << endl;
    cin >> totalMiles;

    cout << "Please insert the Cost per Gallon of Gasoline:" << endl;
    cin >> costGallon;

    cout << "Please insert the Average Milles per Gallon:" << endl;
    cin >> milesGallon;

    cout << "Please insert the Parking Fees (per day):" << endl;
    cin >> parkingFees;

    cout << "Please insert the Tolls per Day:" << endl;
    cin >> tollsDay;

    drivingCost = (totalMiles / milesGallon) * costGallon + parkingFees + tollsDay;

    cout << "The driving cost, for this day is: " << drivingCost << endl;

    return 0;
}





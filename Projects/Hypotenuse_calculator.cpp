#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
// Hypotenuse calculator practice
    double side1 =0 ;
    double side2 =0 ;
    double hypotenuse =0;

    cout << "Enter the value of first Side: " ;
    cin >> side1 ;
    cout << "Enter the value of second Side: " ;
    cin >> side2 ;
    if ((side1 > 0)&&(side2 > 0))
    {
        hypotenuse = sqrt((double)(pow(side1 , 2) + pow(side2 , 2))) ;
        cout << "hypotenuse : " << hypotenuse << endl ;
    }
    else{
        cout << "Invalid input" << endl ;
    }

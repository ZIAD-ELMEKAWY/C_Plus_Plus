#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// Simple calculator practice
    double num1 =0 , num2 =0 ;
    double result =0 ;
    char operation ;
    
    cout << "Enter first number : " ;
    cin >> num1 ;
    cout << "Enter second number : ";
    cin >> num2 ;
    cout << "Enter operation (+ , - , * , /) : " ;
    cin >> operation ;
    switch (operation)
    {
    case '+':
        // Addition
        result = num1 + num2 ;
        cout << "Result : " << result << endl ; 
        break;
    case '-':
        // Subtraction
        result = num1 - num2 ;
        cout << "Result : " << result << endl ; 
        break;
    case '*':
        // Multiplication 
        result = num1 * num2 ;
        cout << "Result : " << result << endl ; 
        break;
    case '/':
        // Division
        if (num2 != 0)
        {
            result = num1 / num2 ;
            cout << "Result : " << result << endl ; 
        }
        else{
            cout << "Division by zero is not allowed" << endl ;
        }
        break;
    default:
        // Un-correct operation
        cout << "Operation is not allowed" << endl ;
        break;
    }
    

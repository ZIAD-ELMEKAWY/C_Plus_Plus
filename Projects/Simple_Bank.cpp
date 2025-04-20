// Simple Bank project 
#include <iostream>
#include <vector>
#include <iomanip>
#include <istream>
#include <stdio.h>

using namespace std ;

/* Software Interface Declaration Start */
void Show_Balance (double Balance ) ;
double Deposit_Money (void) ;
double Withdraw_Money (double Balance) ;

/* Software Interface Declaration End */



int main()
{
    double balance = 0;
    int choice = 0 ;
    cout << "Please enter your balance : " ;
    cin >> balance ;
    do
    {
        cout << "********************* Welcome to Z Bank *********************\n";
        cout << "1- Show Balance  \n" ;
        cout << "2- Deposit Money  \n" ;
        cout << "3- Withdraw Money  \n" ;
        cout << "4- Exit  \n" ;
        cout << "*************************************************************\n" ;
        cout << "Please enter your choice from 1 to 4 : " ;
        cin >> choice ;

        cin.clear(); // Clear the input buffer
        fflush(stdin); // Flush the stdin buffer

        switch (choice)
        {
        case 1:
            Show_Balance(balance);
            break;
        case 2:
            balance += Deposit_Money() ;
            Show_Balance(balance);
            break;
        case 3:
            balance -= Withdraw_Money(balance) ;
            Show_Balance(balance);
            break;
        case 4:
            cout << "Thank you ^-^ " << endl ;
            break;
        default: cout << "Operation is not allowed" << endl ;
            break;
        }
    } while ((choice < 4) && (choice > 0)) ;
    cout <<'\n' << "Thank you for using our service" << endl ;
    

    return 0 ;
}

/* Software Interface Definition Start */
void Show_Balance (double Balance ) 
{
    cout << "Your balance is : " << fixed << setprecision(2) << Balance << " $ " << endl ;
}
double Deposit_Money (void) 
{
    double Deposit =0 ;
    cout << "Please enter the amount you want to deposit : " ;
    cin >> Deposit ;
    cout << "Your deposit money is : " << fixed << setprecision(2) << Deposit << " $ " << endl ;
    return Deposit ;
}
double Withdraw_Money (double Balance) 
{
    double Withdraw = 0 ;
    double amount = 0 ;
    cout << "Please enter the amount you want to withdraw and must be large than 0 : " ;
    cin >> Withdraw ;
    if (Withdraw > 0)
    {
        cout << "Your withdraw money is : " << fixed << setprecision(2) << Withdraw << " $ " << endl ;
        amount = Withdraw ;
    }
    else
    {
        cout << "Operation is not allowed" << endl ;
        amount = 0 ;
    }
    return amount ;
}

/* Software Interface Definition End */


// Output
/**
Please enter your balance : 200
********************* Welcome to Z Bank *********************
1- Show Balance  
2- Deposit Money  
3- Withdraw Money  
4- Exit  
*************************************************************
Please enter your choice from 1 to 4 : 1
Your balance is : 200.00 $ 
********************* Welcome to Z Bank *********************
1- Show Balance  
2- Deposit Money  
3- Withdraw Money
4- Exit
*************************************************************
Please enter your choice from 1 to 4 : 2
Please enter the amount you want to deposit : 400
Your deposit money is : 400.00 $
Your balance is : 600.00 $
********************* Welcome to Z Bank *********************
1- Show Balance
2- Deposit Money
3- Withdraw Money
4- Exit
*************************************************************
Please enter your choice from 1 to 4 : 3
Please enter the amount you want to withdraw and must be large than 0 : -400
Operation is not allowed
Your balance is : 600.00 $
********************* Welcome to Z Bank *********************
1- Show Balance
2- Deposit Money
3- Withdraw Money
4- Exit
*************************************************************
Please enter your choice from 1 to 4 : 3
Please enter the amount you want to withdraw and must be large than 0 : 200
Your withdraw money is : 200.00 $
Your balance is : 400.00 $
********************* Welcome to Z Bank *********************
1- Show Balance
2- Deposit Money
3- Withdraw Money
4- Exit
*************************************************************
Please enter your choice from 1 to 4 : 1
Your balance is : 400.00 $
********************* Welcome to Z Bank *********************
1- Show Balance
2- Deposit Money
3- Withdraw Money
4- Exit
*************************************************************
Please enter your choice from 1 to 4 : 4
Thank you ^-^

Thank you for using our service
*/

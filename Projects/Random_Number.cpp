#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>    
#include <string>


using namespace std ;

int main()
{
    int random_number =0 ;
    int user_input =0 ;
    
    srand(time(0));             // srand is used to seed the random number generator with the current time

    cout << "Enter the number between 1 to 10 to get a random number between 1 and user_input : " ;
    cin >> user_input ;
    random_number = (rand()%user_input) + 1 ; // rand() is a function that returns a random number between 0 and RAND_MAX = 32767(user input)
    // rand()%user_input is used to get a random number between 0 and user_input - 1
    // +1 is used to get a random number between 1 and user_input

    if ((random_number < 11) && (random_number > 0))
    {
        switch(random_number)
        {
            case 1:
                cout << "Congratulation.. You win 10M$ " << endl ;
                break;
            case 2:
                cout << "oops!!  " << endl ;
                break;
            case 3:
                cout << "Congratulation.. You win Lamporgini " << endl ;
                break;
            case 4:
                cout << "Congratulation.. You win robot " << endl ;
                break;
            case 5:
                cout << "Oops!!  " << endl ;
                break;
            case 6:
                cout << "Congratulation.. You win Mercedes " << endl ;
                break;
            case 7:
                cout << "Congratulation.. You win BMW " << endl ;
                break;
            case 8:
                cout << "Congratulation.. You win 10K$" <<endl ;
                break;
            case 9:
                cout << "Congratulation.. You win 10$" << endl ;
                break;
            case 10:
                cout << "Congratulation.. You win 5$" << endl ;
                break;
            default:
                cout << "Congratulation.. You win 100K$" << endl ;
        }
    }
    else
    {
        cout << "Invalid input" << endl ;
    }

    return 0 ;
}

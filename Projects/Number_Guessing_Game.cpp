// Number_Guessing_Game
#include <iostream>
#include <random>
#include <vector>
#include <ctime>

using namespace std ;

int main()
{
    int random_number =0 ;
    int guess_number =0 ;
    int tries = 0 ;

    srand(time(0)); // Seed the random number generator with the current time

    random_number = (rand()%100) + 1 ; // Generate a random number between 1 and 100
    cout << "Welcome to Number Guessing Game ^-^ \n" ;

    do
    {
        cout << "Enter your guess number between 1 and 100 : " ;
        cin >> guess_number ;
        tries++ ; // Increment the number of tries
        if (guess_number > random_number)
        {
            cout << "Your guess is too high, try again." << endl ;
        }
        else if (guess_number < random_number)
        {
            cout << "Your guess is too low, try again." << endl ;
        }
        else if (guess_number == random_number)
        {
            cout << "Congratulation.. You win the game in " << tries << " tries." << endl ;
        }
        else
        {
            cout << "Invalid input, please enter a number between 1 and 100." << endl ;
        }
        
    } while (guess_number != random_number);
    

    return 0 ;
}
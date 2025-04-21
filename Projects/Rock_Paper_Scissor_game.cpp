// Rock Paper Scissor game 
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <string>  // for string
#include <vector>  // for vector

using namespace std;

/* Software Interface Declaration Start */
char getUserChoice() ;    // Done
char getComputerChoice(); // Done
void displayPlayerChoice(char choice) ;  // Done
void determineWinner(char userChoice , char computerChoice , string Player_Name , string Computer_Name) ; 
/* Software Interface Declaration End */

int main()
{
    // Local variables 
    string PlayerName ;
    string ComputerName ;
    char PlayerChoice = 0  , ComoputerChoice = 0 ;
    int counter = 0;
    // player and computer name
    cout << "Player name   : " ;
    getline(cin>> ws ,PlayerName) ;
    cout << "Computer name : " ;
    getline(cin>> ws ,ComputerName) ;
    cout << "Hello " << PlayerName << " VS " << ComputerName << endl ;
    do
    {
        // Player Choice
        PlayerChoice = getUserChoice() ;
        displayPlayerChoice(PlayerChoice);
        // Computer Choice
        ComoputerChoice = getComputerChoice();
        // The champion  
        determineWinner(PlayerChoice , ComoputerChoice , PlayerName , ComputerName) ;
        counter++ ;
    } while (counter < 5);
    
    return 0 ;
}

/* Software Interface Declaration Start */
char getUserChoice() 
{
    char userChoice ; 
    do
    {
        /* code */
        cout << "****************** Rock Paper Scissors game ****************** \n" ;
        cout << "************************************************************** \n" ;
        cout << " 'r' or 'R' for Rock \n" ;
        cout << " 'p' or 'P' for Paper \n" ;
        cout << " 's' or 'S' for Scissor \n" ;
        cout << "************************************************************** \n" ;
        cout << "Enter your choice : " ;
        cin >> userChoice ;
    } while ((userChoice!='r') && (userChoice!='R') &&(userChoice!='p') &&(userChoice!='P') &&(userChoice!='S') &&(userChoice!='s') );
    return userChoice ;
}
char getComputerChoice()
{
    char ComputerChoice = 0 ;
    srand(time(0));
    ComputerChoice = (rand() % 3) + 1 ;
    switch (ComputerChoice)
    {
    case 1:
        cout << "Computer Choice : Rock" << endl ;
        break;
    case 2:
        cout << "Computer Choice : Paper" << endl ;
        break;
    case 3:
        cout << "Computer Choice : Scissor" << endl ;
        break;
    default:
        break;
    }
    return ComputerChoice ;
}
void displayPlayerChoice(char choice) 
{
    switch (choice)
    {
    case 'r':
        cout << "Player Choice : Rock" << endl ;
        break;
    case 'R':
        cout << "Player Choice : Rock" << endl ;
        break;
    case 'p':
        cout << "Player Choice : Paper" << endl ;
        break;
    case 'P':
        cout << "Player Choice : Paper" << endl ;
        break;
    case 's':
        cout << "Player Choice : Scissor" << endl ;
        break;
    case 'S':
        cout << "Player Choice : Scissor" << endl ;
        break;
    default:
        break;
    }
}
void determineWinner(char userChoice , char computerChoice , string Player_Name , string Computer_Name)  
{
    if(((userChoice== 'r')&&(computerChoice == 1)) || ((userChoice== 'p')&&(computerChoice == 2))  || ((userChoice== 's')&&(computerChoice == 3)) )
    {
        cout << Player_Name << " and " << Computer_Name << " are equal ^-^ ." << endl ;
    }
    else if(((userChoice== 'r')&&(computerChoice == 3)) || ((userChoice== 'p')&&(computerChoice == 1))  || ((userChoice== 's')&&(computerChoice == 2)) )
    {
        cout << Player_Name << " is Winnnnnnnnnnner ^-^ , and " << Computer_Name << " is loooooooooooooooooser ._." << endl ;
    }
    else if(((userChoice== 'p')&&(computerChoice == 3)) || ((userChoice== 's')&&(computerChoice == 1))  || ((userChoice== 'r')&&(computerChoice == 2)) )
    {
        cout << Computer_Name << " is Winnnnnnnnnnner ^-^ , and " << Player_Name << " is loooooooooooooooooser ._." << endl ;
    }
    else 
    {
        cout << "Are you crazy !!!!!!! \n" ;
    }
}


/* Software Interface Declaration End */







// ******************************* Output **************************************
Player name   : Ziad 
Computer name : Bimax
Hello Ziad  VS Bimax
****************** Rock Paper Scissors game ****************** 
************************************************************** 
 'r' or 'R' for Rock
 'p' or 'P' for Paper
 's' or 'S' for Scissor
************************************************************** 
Enter your choice : r
Player Choice : Rock
Computer Choice : Scissor
Ziad  is Winnnnnnnnnnner ^-^ , and Bimax is loooooooooooooooooser ._.
****************** Rock Paper Scissors game ******************       
**************************************************************       
 'r' or 'R' for Rock
 'p' or 'P' for Paper
 's' or 'S' for Scissor
**************************************************************       
Enter your choice : r
Player Choice : Rock
Computer Choice : Rock
Ziad  and Bimax are equal ^-^ .
****************** Rock Paper Scissors game ****************** 
************************************************************** 
 'r' or 'R' for Rock
 'p' or 'P' for Paper
 's' or 'S' for Scissor
************************************************************** 
Enter your choice : p
Player Choice : Paper
Computer Choice : Scissor
Bimax is Winnnnnnnnnnner ^-^ , and Ziad  is loooooooooooooooooser ._.
****************** Rock Paper Scissors game ******************       
**************************************************************       
 'r' or 'R' for Rock
 'p' or 'P' for Paper
 's' or 'S' for Scissor
**************************************************************       
Enter your choice : S
Player Choice : Scissor
Computer Choice : Rock
Are you crazy !!!!!!!
****************** Rock Paper Scissors game ****************** 
************************************************************** 
 'r' or 'R' for Rock
 'p' or 'P' for Paper
 's' or 'S' for Scissor
**************************************************************
Enter your choice : r
Player Choice : Rock
Computer Choice : Paper
Bimax is Winnnnnnnnnnner ^-^ , and Ziad  is loooooooooooooooooser ._.

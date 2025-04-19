/**
* @ref  : https://cplusplus.com/reference/string/string/
*/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using  namespace std ;

int main()
{
    string Fullname ;
    string username ;
    int str_Length =0  ;
    int Index_Of_Space = 0;
    cout << "Enter Full name : " ;
    getline(cin>> ws  , Fullname) ; // (getline) is used to read a string with spaces && ws is used to ignore leading whitespace

    str_Length = Fullname.length() ; // length is a function that returns the length of a string
    if(Fullname.empty())
    {
        cout << "You enter an empty name, please enter your correct name." << endl ;
    }
    else
    {
        if(str_Length > 20)
        {
            cout << "Full name is too long" << endl ;
        }
        else if(str_Length < 5)
        {
            cout << "Full name is too short" << endl ;
        }
        else
        {
            Fullname = Fullname.insert(0 , "@") ; // insert is a function that inserts a string at a given position
            Index_Of_Space = Fullname.find(' ') ; // find is a function that returns the position of the first occurrence of a string
            cout << "Welcome " << Fullname  << " to my world "<< endl ;
            cout << "Index_Of_Space : " << Index_Of_Space << endl ;
        }
    }
    cout << "Please enter your username: " ;
    getline(cin>> ws , username) ; // (getline) is used to read a string with spaces && ws is used to ignore leading whitespace
    if(username.empty())
    {
        cout << "You enter an empty username, please enter your correct username." << endl ;
    }
    else
    {
        cout << "Hello " << username.append("@gmail.com")  <<  endl ;
    }

    

    return 0; 
}

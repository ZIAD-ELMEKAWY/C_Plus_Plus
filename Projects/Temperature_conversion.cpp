 // Temperature conversion 
    #include <iostream>
    #include <cmath>
    #include <cstdlib>
    #include <string>
    #include <vector>

    using namespace std;
 
    int main()
    {
        double Celsius =0 , Fahrenheit =0 , Kelvin =0 ;
        double Temperature =  0 ;
        string convert_parameter = "Ziad" ;
        /* Temperature Conversion */
        // Fahrenheit = (Celsius * 1.8) + 32 
        // Celsius = (Fahrenheit - 32) / 1.8
        // Celsius = Kelvin - 273.15
        // Kelvin = Celsius + 273.15
        // Fahrenheit = (Kelvin - 273.15) * 1.8 + 32
        // Kelvin = (Fahrenheit - 32) / 1.8 + 273.15
        cout << "\t *************************** Temperature conversion ************************************ \n\n"  ;
        cout << "Convert Fahrenheit(F) to Celsius(C) Please enter F2C or f2c " << endl ;
        cout << "Convert Celsius(C) to Fahrenheit(F) Please enter C2F or c2f " << endl ;
        cout << "Convert Celsius(C) to Kelvin(K) Please enter C2K or c2k " << endl ;
        cout << "Convert Kelvin(K) to Celsius(C) Please enter K2C or k2c " << endl ;
        cout << "Convert Fahrenheit(F) to Kelvin(K) Please enter F2K or f2k " << endl ;
        cout << "Convert Kelvin(K) to Fahrenheit(F) Please enter K2F or k2f" << endl ;
        cout << "Enter your convert Type : " ;
        cin >> convert_parameter ;
        if((convert_parameter == "F2C") || (convert_parameter == "f2c") )
        {
            cout << "Enter Fahrenheit Temperartue Value : " ;
            cin >> Fahrenheit ;
            Temperature = (Fahrenheit - 32) / 1.8 ;
            cout << "Temperature in Celsius is : " << Temperature << endl ;
        }
        else if((convert_parameter == "C2F") || (convert_parameter == "c2f") )
        {
            cout << "Enter Celsius Temperartue Value : " ;
            cin >> Celsius ;
            Temperature = (Celsius * 1.8) + 32 ;
            cout << "Temperature in Fahrenheit is : " << Temperature << endl ;
        }
        else if((convert_parameter == "C2K") || (convert_parameter == "c2k") )
        {
            cout << "Enter Celsius Temperartue Value : " ;
            cin >> Celsius ;
            Temperature = Celsius + 273.15 ;
            cout << "Temperature in Kelvin is : " << Temperature << endl ;
        }
        else if((convert_parameter == "K2C") || (convert_parameter == "k2c") )
        {
            cout << "Enter Kelvin Temperartue Value : " ;
            cin >> Kelvin ;
            Temperature = Kelvin - 273.15 ;
            cout << "Temperature in Celsius is : " << Temperature << endl ;
        }
        else if((convert_parameter == "F2K") || (convert_parameter == "f2k") )
        {
            cout << "Enter Fahrenheit Temperartue Value : " ;
            cin >> Fahrenheit ;
            Temperature = (Fahrenheit - 32) / 1.8 + 273.15 ;
            cout << "Temperature in Kelvin is : " << Temperature << endl ;
        }
        else if((convert_parameter == "K2F") || (convert_parameter == "k2f") )
        {
            cout << "Enter Kelvin Temperartue Value : " ;
            cin >> Kelvin ;
            Temperature = (Kelvin - 273.15) * 1.8 + 32 ;
            cout << "Temperature in Fahrenheit is : " << Temperature << endl ;
        }
        else{
            cout << "Invalid input" << endl ;
        }
        return 0;
    }

/* temp_2.cpp
 * Details
 * Fahrenheit ==> Celsius ==> Absolute Value
 * Author LocVu <locvx1234@gmail.com>
 *
 */
 
#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
    int max,min;
    cout << "Enter the min fahrenheit: ";
    cin >> min;
    cout << "Enter the max fahrenheit: ";
    cin >> max;
    int fahrenheit;
    float celsius, kevil;
    
    cout << "Fahrenheit"  << "\tCelsius" << "\t\tAbsolute Value" << endl;
    for (fahrenheit = min; fahrenheit <= max; fahrenheit += 20)
    {
        celsius = (fahrenheit - 32)*5/9;
        kevil = celsius + 273.15; 
        cout << fahrenheit  <<"\t\t" << celsius<<"\t\t"<< kevil <<endl;
    }
    getch();
    return 0;
    
}

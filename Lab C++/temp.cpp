/* convert temperature
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
    int max;
    cout << "Enter the fahrenheit: ";
    cin >> max;
    int fahrenheit;
    float celsius, kevil;
    cout.setf (ios::fixed);
    cout.setf (ios::showpoint);
    cout.precision (2);
    cout << "Fahrenheit"  << "\tCelsius" << "\t\tAbsolute Value" << endl;
    for (fahrenheit = 0; fahrenheit <= max; fahrenheit += 20)
    {
        celsius = (float)(fahrenheit - 32)*5/9;
        kevil = celsius + 273.15; 
        cout << fahrenheit  <<"\t\t"<< celsius<< "\t\t"<< kevil <<endl;
    }
    getch();
    return 0;
    
}

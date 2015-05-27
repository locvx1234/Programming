// Chuyen nhiet do tu thang Fahrenheit sang thang Celsius va Kelvin
#include "iostream"

using namespace std;

int main()
{
    int fah;
    float cel, kel;
    cout << "Fahrenheit \t Celsius \t Kelvin"<< endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    for (fah = 0 ; fah <=300; fah+=20)
    {
            cel = float(fah - 32)*5/9;
            kel = cel + 273.15;
            cout << fah << "\t\t" << cel << "\t\t" << kel <<endl;

    }
    return 0;
}

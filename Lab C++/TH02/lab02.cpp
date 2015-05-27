// Chuyen nhiet do tu thang Fahrenheit sang thang Celsius va Kelvin
// Nhap gia tri dau, cuoi va khoang cach cac gia tri
#include "iostream"
using namespace std;

int main()
{
    int start, finish, value, fah;
    float cel, kel;
    cout << "Nhiet do nho nhat: " ;
    cin >> start;
    cout << "Nhiet do lon nhat: ";
    cin >> finish;
    cout << "Khoang cach giua cac gia tri: ";
    cin >> value;
    cout << "Fahrenheit \t Celsius \t Kelvin"<< endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    for (fah = start ; fah <=finish; fah+=value)
    {
            cel = float(fah - 32)*5/9;
            kel = cel + 273.15;
            cout << fah << "\t\t" << cel << "\t\t" << kel <<endl;

    }
    return 0;
}

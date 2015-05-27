// Nhap 2 so, xet xem so thu nhat co phai la boi cua so thu 2 khong
#include "iostream"
using namespace std;

int main()
{
    int number1, number2;
    cin >> number1 >> number2;
    if (number1 % number2 == 0)
        cout << "So thu hai la boi cua so thu nhat " << number1 << " = " << number2 << " * " << number1/number2;
    else
        cout << "So thu hai khong la boi cua so thu nhat ";
    return 0;
}

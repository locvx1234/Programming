// Tinh uoc so chung 2 so nguyen duong (de quy)
#include "iostream"
using namespace std;

unsigned int UCLN(unsigned int num1,unsigned int num2)
{
    return (num2 == 0)?num1:UCLN(num2, num1%num2);
}

int main()
{
    unsigned int num1, num2 ;
    cout << "Enter 2 positive number: "<< endl;
    cin >> num1 >> num2;
    cout << UCLN (num1, num2);
    return 0;
}

// Nhap 5 so, in ra so so am, duong , khong
#include "iostream"
using namespace std;

int main()
{
    int a[5];
    int am = 0, duong = 0, khong = 0;
    for (int i = 0 ; i < 5 ; i++)
    {
        cin >> a[i];
    }
    for (int i = 0 ; i < 5 ; i++)
    {
        if (a[i] < 0)
            am++;
        if (a[i] > 0)
            duong++;
        if (a[i] == 0)
            khong++;
    }
    cout << "So phan tu am " << am<< endl << "So phan tu duong " << duong << endl << "So phan tu khong " << khong << endl;
    return 0;
}

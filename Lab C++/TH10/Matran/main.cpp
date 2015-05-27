#include <iostream>
#include "iomanip"
#include "Matran.h"
using namespace std;

int main()
{
 	MT x, y;
 	cout << "Nhap ma tran X:\n "; cin >> x ;
    cout << "Nhap ma tran Y:\n "; cin >> y ;

 	cout << "\n Matrix X " << x << endl <<
            "\n Matrix Y " << y << endl;

    cout << (x+y) << endl ;
    cout << (x-y) << endl;

    return 0;
}

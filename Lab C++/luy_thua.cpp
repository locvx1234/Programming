/* luythua.cpp
 * Details
 *        Tinh luy thua cua mot so duong
 * Author LocVu
 */

#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
    int a,b;
    cout << "Co so: ";
    cin >> a;
    cout << "So mu: ";
    cin >> b;
    int c = 1;
    for (int count = 0; count < b; count ++)
    {
        c *= a;
    }
    cout "Luy thua bac" << b <<" cua "<<a<< " bang " <<c<< endl;
    getch();
    return 0;
}
           

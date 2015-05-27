/* thunhap.cpp
 * tinh luong :
 *      Toi thieu 100h. 12.000 VND/h
 *      Cac gio tiep :
 *          1 - 50 h. 16.000 VND/h
 *          1 - 50 h tiep. 20.000 VND/h
 *          Nhung gio tiep 25.000 VND/h
 */

#include "iostream"
using namespace std;

int main()
{
    int day_work;
    do
    {
        cout << "How many day you worked in last month? ";
        cin >> day_work;

    }
    while (day_work < 0);
    if (day_work <= 100)
    {
        cout << "Your salary is " << day_work*12000 <<" VND "<<endl;
    }
    else if (day_work>100 && day_work <= 150)
    {
        cout << "Your salary is " << 100*12000 + (day_work-100)*16000 <<" VND "<<endl;
    }
    else if (day_work>150 && day_work <= 200)
    {
        cout << "Your salary is " << 100*12000 + 50*16000 + (day_work-150)*20000 <<" VND "<<endl;
    }
    else
    {
        cout << "Your salary is " << 100*12000 + 50*16000 + 50*20000 +(day_work-200)*25000 <<" VND "<<endl;
    }
    return 0;
}

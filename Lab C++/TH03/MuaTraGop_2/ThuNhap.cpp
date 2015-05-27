/* thunhap.cpp
 * tinh luong :
 *      Toi thieu 100h. 12.000 VND/h
 *      Cac gio tiep :
 *          1 - 50 h. 16.000 VND/h
 *          1 - 50 h tiep. 20.000 VND/h
 *          Nhung gio tiep 25.000 VND/h
 */
#include "ThuNhap.h"
#include "iostream"
using namespace std;

int thunhap(int day_work)
{

    long salary;

    if (day_work <= 100)
    {
         salary = day_work*12000 ;
    }
    else if (day_work>100 && day_work <= 150)
    {
        salary = 100*12000 + (day_work-100)*16000 ;
    }
    else if (day_work>150 && day_work <= 200)
    {
        salary = 100*12000 + 50*16000 + (day_work-150)*20000 ;
    }
    else
    {
        salary = 100*12000 + 50*16000 + 50*20000 +(day_work-200)*25000 ;
    }
    return salary;
}

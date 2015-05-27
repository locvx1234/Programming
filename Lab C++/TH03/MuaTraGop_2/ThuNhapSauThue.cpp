/* ThuNhapSauThue.cpp
 * tinh luong :
 *      Bao hiem 9% (mien thue)
 *      Thue :
 *          1.000.000 dau tien (mien thue)
 *            500.000 tiep (10% Thu nhap chiu thue)
 *            500.000 tiep (15% Thu nhap chiu thue)
 *            tiep theo    (20% Thu nhap chiu thue)
 *  Thu nhap chiu thue = Tong thu nhap - Bao hiem
 *  Luong sau thue = Thu nhap chiu thue - Thue
 */
#include "ThuNhap.h"
#include "iostream"
using namespace std;
const float PROTECT=0.09;
int thuclinh(long salary)
{
    long luong_sau_thue, thue;
    float TN_chiu_thue;
    TN_chiu_thue = salary*(1 - PROTECT);

    if (TN_chiu_thue <= 1000000)
    {
        thue = 0;
    }
    else if (TN_chiu_thue >1000000 && TN_chiu_thue <= 1500000)
    {
        thue = (TN_chiu_thue - 1000000)*(0.1);
    }
    else if (TN_chiu_thue >1500000 && TN_chiu_thue <= 2000000)
    {
        thue = 500000*.10 + (TN_chiu_thue - 1500000)*.15 ;
    }
    else
    {
        thue = 500000*0.10 + 500000*0.15 + (TN_chiu_thue - 2000000)*0.2;
    }
    luong_sau_thue = TN_chiu_thue - thue;

    return luong_sau_thue ;
}

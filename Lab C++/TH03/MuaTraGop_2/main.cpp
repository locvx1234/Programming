/* MuaTraGop.cpp
 * Vay 10.000.000 VND lai suat 2% (VayNganHang.cpp)
 * Tinh thoi gian tra het no
 *  Tong thu nhap 1.500.000 hoc bong UTACHI vao dau thang va lam them 155h (thunhapSauThue.cpp)
 *  Sinh hoat hang thang 2.000.000, tien du tra ngan hang
 */

#include "iostream"
#include "ThuNhap.h"
using namespace std;
int main()
{
    int day_work, i = 0;
    long tien_no = 10000000, tl;
    while (tien_no > 0)
    {
        cout << "How many day you worked in last month? ";
        cin >> day_work;
        cout << "Thu nhap sau thue "<<thuclinh(thunhap(day_work)) <<endl;
        tl = thuclinh(thunhap(day_work)) + 1500000 - 2000000;
        tien_no = vayNH(tien_no) - tl;
        cout << "So tien du no vao cuoi thang " << tien_no <<endl;
        i++;

    }
    cout <<"Sau " << i << " thang thi tra het no" << endl;
    return 0;
}

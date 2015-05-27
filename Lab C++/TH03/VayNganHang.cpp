/* VayNganHang.cpp
 *      Nhap vao so tien vay, lai suat 2%/thang
 * tinh tren Tong du no va cộng dồn vao cuoi thang
 *
 */

#include "iostream"
#include "ThuNhap.h"
using namespace std;

int main()
{
    long tong_du_no_dau_thang, lai_suat_vay, tong_du_no_cuoi_thang ;
    cout << "How much you want to borrow? ";
    cin >> tong_du_no_dau_thang;
    cout << "THANG       TONG NO DAU THANG\tLAI SUAT\tTONG NO CUOI THANG" <<endl;
    lai_suat_vay = 0.02*tong_du_no_dau_thang;
    tong_du_no_cuoi_thang = tong_du_no_dau_thang + lai_suat_vay;
    for (int thang = 1 ; thang <=12 ; ++thang)
    {
        lai_suat_vay = 0.02*tong_du_no_dau_thang;
        tong_du_no_cuoi_thang = tong_du_no_dau_thang + lai_suat_vay;
        cout << thang <<"\t\t" << tong_du_no_dau_thang << "\t\t" << lai_suat_vay << "\t\t" << tong_du_no_cuoi_thang <<endl;
        tong_du_no_dau_thang = tong_du_no_cuoi_thang;
    }
}

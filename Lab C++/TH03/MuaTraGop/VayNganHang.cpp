/* VayNganHang.cpp
 *      Nhap vao so tien vay, lai suat 2%/thang
 * tinh tren Tong du no va cộng dồn vao cuoi thang
 *
 */

#include "iostream"
#include "ThuNhap.h"
using namespace std;

int vayNH(long tong_du_no_dau_thang)
{
    long lai_suat_vay, tong_du_no_cuoi_thang ;
    lai_suat_vay = 0.02*tong_du_no_dau_thang;
    tong_du_no_cuoi_thang = tong_du_no_dau_thang + lai_suat_vay;

    return tong_du_no_cuoi_thang;

}

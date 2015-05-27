/* Path: ./Home/Dropbox/LabC++/Lab10
 * Filename: Phanso.cbp
 * Author: Vu Xuan Loc
 * Date: 1/5/2015
 */

#include <iostream>
#include "Phan_so.h"
using namespace std;

int main()
{
//! \brief Nhap cac phan so tu ban phim va tinh tong
    Phan_so Sum;
    int N;
    cout << "Ban muon nhap bao nhieu phan so ? " ;
    cin >> N;
    Phan_so *ph = new Phan_so[N];  // Khoi tao mang dong gom N phan so

    //Nhap va tinh tong
    for (int i = 0 ; i < N; i++){
        cin >> *(ph+i);
        Sum = Sum + *(ph+i) ;
    }

    cout << "Tong cac phan so vua nhap la: " ;
    Sum.Toi_gian();
    cout << Sum;

    delete []ph;
    return 0;
}

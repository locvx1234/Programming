#include <iostream>
#include "Phan_so.h"
using namespace std;

int main()
{
    Phan_so ps, tps, hps, tong(0,1), p(4,16), q(2,4);

    p.Toi_gian();
    p.Output();
    q.Output();
    tps = p+q;
    hps = p-q;
    tps.Toi_gian();
    tps.Output();
    hps.Toi_gian();
    hps.Output();

    int N;
    cout << "Ban muon nhap bao nhieu phan so ? " ;
    cin >> N;
    Phan_so *ph = new Phan_so[N];
    for (int i = 0 ; i < N; i++){
        (ph+i)->Input();
        tong = tong + *(ph+i) ;
    }
    cout << "Tong cac phan so vua nhap la: " ;
    tong.Toi_gian();
    tong.Output();

    delete []ph;
    return 0;
}

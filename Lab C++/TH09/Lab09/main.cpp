#include <iostream>
#include "Diem.h"
using namespace std;

//int argc, char *argv[]
int main()
{
    Diem a(0,3), b (4,0);
    int N;
    a.hienthi();
    b.hienthi();
    cout << a.khoangcach(b);
    cout << "\n Ban muon nhap may diem? ";
    cin >> N;
    Diem *p = new Diem[N];
    for (int i = 0 ; i < N; i++){
        (p+i)->nhapsl();
    }
    Diem x;
    cout << " Nhap toa do diem X la diem goc: ";
    x.nhapsl();
    cout << "Khoang cach lon nhat ma cac diem tao voi X la M = ";
    float M;
    cin >> M;
    for (int i = 0 ; i < N; i++){
        if ( (p+i)->khoangcach(x) <= M){
            (p+i)->hienthi();
            cout.precision(2);
            cout << "    Chieu dai : " << (p+i)->khoangcach(x) <<endl;
        }
    }
    delete []p;
    return 0;
}

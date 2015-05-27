#include "Diem.h"
#include "iostream"
#include "cmath"
using namespace std;
Diem::Diem():hoanh(0), tung(0) {};
Diem::Diem(float h, float t): hoanh(h), tung(t) {};
float Diem::gettung()const{
    return tung;
}
float Diem::gethoanh()const{
    return hoanh;
}
void Diem::hienthi( ){
    cout << "(" << hoanh << "," << tung << ") ";
}

float Diem::khoangcach(Diem d1){
    return sqrt((d1.tung - tung)*(d1.tung - tung) + (d1.hoanh - hoanh)*(d1.hoanh - hoanh) );
}
void Diem::nhapsl()  {
 	cout <<" \n Nhap hoanh do va tung do cua diem:\n" ;
 	cin >> hoanh >> tung ;
}


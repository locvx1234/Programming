#include "Phan_so.h"
#include "iostream"
#include "cmath"
using namespace std;

Phan_so::Phan_so(int tu, int mau): tu_so(tu), mau_so(mau) {};
Phan_so::Phan_so(): tu_so(0), mau_so(1) {};
int Phan_so::UCLN(int a, int b){
    return (b==0)?a:UCLN(b,a%b);
}
int Phan_so::gettu()const{
    return tu_so;
}
int Phan_so::getmau()const{
    return mau_so;
}
//Nhap phan so
void Phan_so::Input(){
    cout << "Nhap tu so va mau so cua phan so: " <<endl;
    cin >> tu_so >> mau_so;
}

//Toi gian phan so
 void Phan_so::Toi_gian(){
    int temp_t, temp_m;
    if (Phan_so::UCLN(tu_so, mau_so) != 1) {
        temp_t = tu_so / Phan_so::UCLN(tu_so, mau_so);
        temp_m = mau_so / Phan_so::UCLN(tu_so, mau_so);
        tu_so = temp_t;
        mau_so = temp_m;
    }

}
//Ham tinh tong 2 phan so
Phan_so Phan_so::operator+(Phan_so ps){
    Phan_so tps;
	tps.tu_so = this->tu_so*ps.mau_so + this->mau_so*ps.tu_so;
	tps.mau_so = this->mau_so*ps.mau_so;
	return tps;
}
//Ham tinh hieu 2 phan so
Phan_so Phan_so::operator-(Phan_so ps){
    Phan_so hps;
	hps.tu_so = this->tu_so*ps.mau_so - this->mau_so*ps.tu_so;
	hps.mau_so = this->mau_so*ps.mau_so;
	return hps;
}
//In phan so
void Phan_so::Output(){

    if (tu_so == 0){
        cout << '0';
    }

    else if (mau_so == 1){
        cout << tu_so;
    }
    else if (tu_so*mau_so > 0){
        cout << tu_so << "/" << mau_so << endl;
    }
    else{
        cout << "- " << abs(tu_so) << "/" << abs(mau_so) << endl;
    }

}

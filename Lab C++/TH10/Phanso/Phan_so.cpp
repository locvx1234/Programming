#include "Phan_so.h"
#include "iostream"
#include "cmath"
using namespace std;

Phan_so::Phan_so(int tu, int mau): tu_so(tu), mau_so(mau) {}; //Khoi tao co tham so
Phan_so::Phan_so() {    //Khoi tao mac dinh
    tu_so = 0;
    mau_so = 1;
}

//Tinh UCLN
int UCLN(const int &a,const int &b){
    return (b==0)?a:UCLN(b,a%b);
}

//Nhap phan so
istream& operator >> (istream& is, Phan_so &ps){
    cout << "- Nhap tu so va mau so cua phan so: " <<endl;
    is >> ps.tu_so >> ps.mau_so;
}

//Nap chong toan tu gan
void Phan_so::operator = (const Phan_so &ps){
    tu_so = ps.tu_so;
    mau_so = ps.mau_so;
}

//Toi gian phan so
Phan_so Phan_so::Toi_gian(){
    int UC = UCLN(tu_so, mau_so) ;
    if (UC != 1) {
        tu_so /=  UC;
        mau_so /=  UC;
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
ostream& operator << (ostream& os, Phan_so &ps){
    if (ps.mau_so == 0){
        cout << "Syntax ERROR!";
    }
    else if (ps.tu_so == 0){
        cout << '0';
    }
    else if (ps.mau_so == 1){
        cout << ps.tu_so;
    }
    else if (ps.tu_so*ps.mau_so > 0){
        cout << ps.tu_so << "/" << ps.mau_so << endl;
    }
    else{
        cout << "- " << abs(ps.tu_so) << "/" << abs(ps.mau_so) << endl;
    }
}

Phan_so::~Phan_so(){}

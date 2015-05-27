#include "iostream"
#include "cstring"
using namespace std;

class Monhoc {
    char ten[100];
    int sotinchi;
public:
    const char* layten()
    {
        return ten;
    }
    int laysotinchi()
    {
        return sotinchi;
    }
public:
    Monhoc(){
        strcpy(ten, "Hello World");
        sotinchi = 100;
    }
    void nhapmonhoc();
    void inmonhoc(){
        cout << "Mon hoc -" << ten << "- co so tin chi " << sotinchi <<endl;
    }
    void copy(Monhoc mh){
        strcpy(ten, mh.ten);
        sotinchi = mh.sotinchi;

    }

};

 void Monhoc::nhapmonhoc(){
        cout << "Nhap ten mon hoc";
        cin >> ten;
        cout << "Nhap so tin chi";
        cin >> sotinchi;
    }
int main(){

    Monhoc mh;
    mh.nhapmonhoc();
    Monhoc mhc;
    mhc.copy(mh);
    mhc.inmonhoc();
    cout << mh.ten << endl;
    return 0;
}

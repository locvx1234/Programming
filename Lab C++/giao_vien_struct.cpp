#include <iostream>
using namespace std;

struct Giangvien {
    char ten[1000];
    int  yob;
    int bacluong;
    float phucap;
};

int main(){
    int i, n;
    struct Giangvien gv[100];
    cin >> n;cin.ignore();
    for (i = 0; i <= n - 1; i++){
        cout << "Nhap thong tin giang vien thu " << i + 1 << endl;
        cout << "Ho va ten: "; cin.getline(gv[i].ten, 40);
        cout << "Nam sinh: " ; cin >> gv[i].yob ; cin.ignore();
        cout << "Bac luong: "; cin >> gv[i].bacluong; cin.ignore();
        cout << "Phu cap: "  ; cin >> gv[i].phucap; cin.ignore();
        cout << "Luong hang thang: " << gv[i].bacluong * 1050 * gv[i].phucap << "000" <<  endl;
    }
    cout << "Giang vien 40 tuoi tro xuong:" << endl;
    for (i = 0; i <= n - 1; i++){
        if ((2015 - gv[i].yob) <= 40){
            cout << "Ho va ten: " << gv[i].ten << endl;
            cout << "Nam sinh: "  << gv[i].yob << endl;
            cout << "Bac luong: " << gv[i].bacluong << endl;
            cout << "Phu cap: "  << gv[i].phucap << endl;
        }
    }
    return 69;

}

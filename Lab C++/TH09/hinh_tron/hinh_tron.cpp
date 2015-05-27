#include "hinh_tron.h"
#include "iostream"
using namespace std;
float const PI=3.14;

Hinhtron::Hinhtron(float bk): R(bk){};
Hinhtron::Hinhtron() : R(0) {};

void Hinhtron::Input(){
    cout << "Nhap ban kinh: ";
    cin >> R;
}

float Hinhtron::Dientich(){
    return PI*R*R;
}
float Hinhtron::Chuvi(){
    return 2*PI*R;
}

void Hinhtron::Output(){
    cout << "Chu vi " << this->Chuvi() << endl;
    cout << "Dien tich " << this->Dientich() << endl;
}

void Hinhtron::Sort(Hinhtron *p, int N){
    for (int i = 0; i < N; i++){
        for (int j = i+ 1; j < N; j++){
            if ( (p+j)->R < (p+i)->R){
                Hinhtron temp;
                temp = *(p+j);
                *(p+j) = *(p+i);
                *(p+i) = temp;
            }
        }
    }

}


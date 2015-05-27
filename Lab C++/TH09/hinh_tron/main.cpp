#include <iostream>
#include "hinh_tron.h"
using namespace std;

int main()
{
    Hinhtron r1(3);
    r1.Output();

    int N;
    cout << "Ban muon nhap bao nhieu ban kinh ? ";
    cin >> N;
    Hinhtron *p = new Hinhtron[N];
    for (int i = 0; i< N; i++){
        (p+i)->Input();
    }

    p->Sort(p,N);

    for (int i = 0; i< N; i++){
        (p+i)->Output();
    }
    delete []p;
    return 0;
}

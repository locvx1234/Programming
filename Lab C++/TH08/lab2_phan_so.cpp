//! \brief practice week 8
//! \detail nhap phan so, toi gian phan so, cong tru phan so
#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for(int pos = ((int)(first)); pos < ((int)(last)); pos++)

typedef struct{
    int tu_so, mau_so;
    float value;
}Phan_so;
int input(int N, Phan_so *ps){
    FORI(i,0,N){
        cout << "Phan so thu " << i+1 << endl;
        cout << "Tu so: " ;
        cin >> (ps+i)->tu_so;
        cout << "Mau so: " ;
        cin >> (ps+i)->mau_so;
        }
    return 0;
}

int UCLN(int a, int b){
    return (b==0)?a:UCLN(b,a%b);
}
int toi_gian(int N,Phan_so *ps){
    float tu, mau;
    FORI(i,0,N){
        if ( UCLN((ps+i)->tu_so, (ps+i)->mau_so) != 1){
        mau = (ps+i)->mau_so / UCLN((ps+i)->tu_so, (ps+i)->mau_so);
        tu = (ps+i)->tu_so / UCLN((ps+i)->tu_so, (ps+i)->mau_so);
        (ps+i)->mau_so = mau;
        (ps+i)->tu_so = tu;
        }
    }
}
float cong_phan_so(int N,Phan_so *ps){
    float tu, mau;
    (ps+N+1)->tu_so = (ps+0)->tu_so;
    (ps+N+1)->mau_so = (ps+0)->mau_so;
    FORI(i,1,N){
        tu = ((ps+i)->tu_so)*((ps+N+1)->mau_so)+((ps+i)->mau_so)*((ps+N+1)->tu_so);
        mau = ((ps+i)->mau_so)*((ps+N+1)->mau_so);
        (ps+N+1)->tu_so = tu;
        (ps+N+1)->mau_so = mau;
    }
    //Toi gian
    if ( UCLN((ps+N+1)->tu_so, (ps+N+1)->mau_so) != 1){
        mau = (ps+N+1)->mau_so / UCLN((ps+N+1)->tu_so, (ps+N+1)->mau_so);
        tu = (ps+N+1)->tu_so / UCLN((ps+N+1)->tu_so, (ps+N+1)->mau_so);
        (ps+N+1)->mau_so = mau;
        (ps+N+1)->tu_so = tu;
        }
    cout << "TOng cac phan so : " << (ps+N+1)->tu_so <<"/"<< (ps+N+1)->mau_so <<endl;
    return 0;
    }
float tru_phan_so(int N,Phan_so *ps){
    float tu, mau;
    (ps+N+2)->tu_so = (ps+0)->tu_so;
    (ps+N+2)->mau_so = (ps+0)->mau_so;
    FORI(i,1,N){
        tu = -((ps+i)->tu_so)*((ps+N+2)->mau_so)+((ps+i)->mau_so)*((ps+N+2)->tu_so);
        mau = ((ps+i)->mau_so)*((ps+N+2)->mau_so);
        (ps+N+2)->tu_so = tu;
        (ps+N+2)->mau_so = mau;
    }
    //Toi gian
    if ( UCLN((ps+N+2)->tu_so, (ps+N+2)->mau_so) != 1){
        mau = (ps+N+2)->mau_so / UCLN((ps+N+2)->tu_so, (ps+N+2)->mau_so);
        tu = (ps+N+2)->tu_so / UCLN((ps+N+2)->tu_so, (ps+N+2)->mau_so);
        (ps+N+2)->mau_so = mau;
        (ps+N+2)->tu_so = tu;
        }
    cout << "Hieu phan so dau tien tru cac phan so tiep : " << (ps+N+2)->tu_so <<"/"<< (ps+N+2)->mau_so <<endl;
    return 0;
    }

int sap_xep(int N, Phan_so *ps){
    //Gan gia tri cho cac phan so
    FORI(i,0,N){
        (ps+i)->value = float(((ps+i)->tu_so))/((ps+i)->mau_so);
    }
    //Sap xep
    FORI(i,0,N-1){
        int pos_min = i;
        FORI(j,i+1,N){
            if ((ps+j)->value < (ps+pos_min)->value)
            {
                pos_min = j;
            }
        }
        if (pos_min != i){
            Phan_so *temp = new Phan_so;
            *temp = *(ps+i);
            *(ps+i) = *(ps+pos_min);
            *(ps+pos_min) = *temp;
        }
    }
    return 0;
}
int output(int N, Phan_so *ps){
    FORI(i,0,N){
    cout << (ps+i)->tu_so << "/" <<(ps+i)->mau_so <<endl;
    }
    return 0;
}
int main(){
    int N;
    cout << "How many fraction do you want to enter?" << endl;
    cin >> N;
    Phan_so *ps = new Phan_so[N+2]; //Bo nho thu N+1 de luu tong, N+2 de luu hieu
    input(N, ps);

    cong_phan_so(N,ps);
    tru_phan_so(N,ps);
    cout << "Cac phan so dang toi gian\n";
    toi_gian(N,ps);
    sap_xep(N, ps);
    output(N,ps);

    return 0;
}

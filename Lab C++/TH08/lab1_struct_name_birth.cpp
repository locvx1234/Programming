//! \brief practice week 8
//! \detail nhap ten, ngay sinh, sap xep theo tuoi in ra m.h
#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for(int pos = ((int)(first)); pos < ((int)(last)); pos++)

typedef struct{
    int day, month, year;
}Date_of_birth;

typedef struct{
    Date_of_birth date;
    char name[100];
}Profile;

int input(int N, Profile *per){
    FORI (i,0,N){
        cout << "Info of person " << i+1 <<endl << "Name : " ;
        cin >> (per+i)->name;
        cout << "Date of birth (dd mm yyyy) : " <<endl;
        cin >> (per+i)->date.day >> (per+i)->date.month >> (per+i)->date.year;

    }
    return 0;
}

int sort_old(int N, Profile *per){
    FORI(i,0,N-1){
        int pos_min = i;
        FORI(j,i+1,N){
            if ((per+j)->date.year < (per+pos_min)->date.year)
            {
                pos_min = j;
            }
        }
        if (pos_min != i){
            Profile *temp = new Profile;
            *temp = *(per+i);
            *(per+i) = *(per+pos_min);
            *(per+pos_min) = *temp;
        }
    }
    return 0;
}
int output(int N, Profile *per){
    FORI(i, 0, N){
        cout << (per+i)->name << "\t" << (per+i)->date.year << endl;
    }
    return 0;
}
int main(){
    int N;
    cout << "How many people do you want to enter?" << endl;
    cin >> N;
    Profile *per = new Profile[N];
    input(N, per);
    sort_old(N, per);
    output(N,per);
    return 0;

}

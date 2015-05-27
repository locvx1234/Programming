//! \brief practice week 7
//! \detail nhap 4 loai diem, xep hang hoc sinh
#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for(int pos = ((int)(first)); pos < ((int)(last)); pos++)

typedef struct{
    float th1, th2, gk, ck; //diem thuc hanh 1, thuc hanh 2, giua ky, cuoi ky
    char name[100];
}Point;

//! \detail input student's name and 4 point
int input(Point *student, int N){
    FORI(i, 0, N){
        cout << "Input info of student " << i+1 <<endl ;
        cin >> (student+i)->name >> (student+i)->th1 >> (student+i)->th2 >> (student+i)->gk >> (student+i)->ck ;
    }
    return 0;
}
int rank(Point *student, int N, float *final_point, char *final_rank){
    FORI(i,0,N){
        *(final_point+i) = ((student+i)->th1 + (student+i)->th2)*0.25/2 + ((student+i)->gk)*0.25 + ((student+i)->ck)*0.5;
        if (*(final_point+i) >= 9)
            *(final_rank + i) = 'A';
        else if (*(final_point+i) >= 8 && *(final_point+i) < 9)
            *(final_rank + i) = 'B';
        else if (*(final_point+i) >= 7 && *(final_point+i) < 8)
            *(final_rank + i) = 'C';
        else if (*(final_point+i) >= 6 && *(final_point+i) < 7)
            *(final_rank + i) = 'D';
        else
            *(final_rank + i) = 'F';
    }
    return 0;
}

int output(Point *student, int N,float *final_point, char *final_rank){
    cout << "------------------------------------------------" << endl << "                 BANG DIEM HOC SINH" << endl << "NAME" << "\t" << "Fisrt PP" << "\t" << "Sec PP"  << "\t"<<"M-P"<< "\t" <<"L-P"<< "\t" <<"F-P" << "\t" <<"RANK"<< endl;
    FORI(i,0,N){
        cout << (student+i)->name << "\t" <<(student+i)->th1 << "\t\t" << (student+i)->th2 << "\t" << (student+i)->gk << "\t" <<(student+i)->ck << "\t" << *(final_point+i) << "\t" << *(final_rank+i) << endl;
       }
    return 0;
}

int main(){
    int N;
    cout << "How many student will you enter?" << endl;
    cin >> N;
    cout << " Please enter name, fisrt practice point, second practice point, mid point, last point " << endl;
    Point *student = new Point[N];
    float *final_point = new float[N];
    char *final_rank = new char[N];
    input(student, N);
    rank(student,N,final_point,final_rank);
    output(student, N,final_point,final_rank);
    return 0;
}

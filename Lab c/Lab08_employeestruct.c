#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50

typedef struct{
           int manv;
           char name[30];
           char adress[30];
           }nhanvien;


int main(){
    nhanvien nv[MAX];
    int i,n;
    char ctemp[10];
    printf("Nhap vao so nhan vien: ");
    gets(ctemp);
    n=atoi(ctemp);
    for (i=0;i<n;i++){
        printf("\nNhap vao thong tin nhan vien thu %d:\n", i+1);
        printf("Ma nhan vien: "); 
        gets(ctemp);
        nv[i].manv = atoi(ctemp);
        printf("Ho va ten: ");
        gets(nv[i].name);
        printf("Dia chi: ");
        gets(nv[i].adress);
    }
    
    printf("\n_____________________________________________________\n");
    printf("                 DANH SACH NHAN VIEN\n");
    printf("MA SO \tHO TEN\t\t\tDIA CHI");
    printf("\n_____________________________________________________\n\n");
    for (i=0;i<n;i++)
    printf("%d \t%s\t\t%s\n", nv[i].manv, nv[i].name, nv[i].adress);
getch();
}

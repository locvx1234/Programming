#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX 10

typedef struct{
        int toan,ly,hoa;
        }subject;
    
typedef struct{
        int dd,mm,yyyy;
        }ns ; 
        
typedef struct{
        char name[30];
        char school[50];
        int id;
        ns date;
        subject point;
        }sinhvien;
        

void input(sinhvien,int);
int main(){
    int n;
    sinhvien sv[MAX]; 
    char ctemp[10];
	
    printf("Nhap vao so sinh vien: ");
    gets(ctemp);
    n= atoi(ctemp);
    input(sv,n);
    printf("\n_____________________________________________________\n");
	printf("                 DANH SACH NHAN VIEN\n");
	printf("HO TEN \tNGAY SINH \tTRUONG\t\t\tMA SO \tTONG DIEM");
	printf("\n_____________________________________________________\n\n");
	for(i=0;i<n;i++){
        if(*(sum+i)>=15)
        printf ("%s \t%2d-%2d-%4d \t%s \t%d \t%d\n\a", sv[i].name,sv[i].date.dd,sv[i].date.mm,sv[i].date.yyyy,sv[i].school,sv[i].id, *(sum+i));
    }
    getch();
} 

void input(sinhvien sv[],int n){  
	 char ctemp[10];
	 int *sum,i; 
     for(i=0;i<n;i++){
        printf("\nNhap sinh vien thu %d",i+1);
        printf("\nHo ten: ");
        gets(sv[i].name);
        
        printf("Ngay sinh: ");
        scanf("%d/%d/%d",&sv[i].date.dd,&sv[i].date.mm,&sv[i].date.yyyy);
        fflush(stdin);
     
        printf("Truong: ");
        gets(sv[i].school);
        printf("So bao danh: ");
        gets(ctemp);
        sv[i].id = atoi(ctemp);
        printf("Diem toan: ");
        gets(ctemp);
        sv[i].point.toan = atoi(ctemp);
        printf("Diem ly: ");
        gets(ctemp);
        sv[i].point.ly = atoi(ctemp);
        printf("Diem hoa: ");
        gets(ctemp);
        sv[i].point.hoa=atoi(ctemp);
        *(sum+i) = sv[i].point.toan + sv[i].point.ly + sv[i].point.hoa;     
    }
}
    

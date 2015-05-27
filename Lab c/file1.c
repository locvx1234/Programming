#include "stdio.h"

typedef struct
{
    char ten[100];
    int tuoi;
    char gioiTinh[89];
}nhanvien;

void input(nhanvien nv[],int n, FILE *fr);
void output(nhanvien nv[],int n,FILE *fr);
int main()
{
    FILE *fr;
    int n,i;
    nhanvien nv[100];
    printf ("Nhap so nhan vien ");
    scanf ("%d", &n);
//    fflush(stdin);
    if ((fr=fopen ("D:\\loc.txt","wb")) == NULL )
    {
        printf ("Khong mo duoc file");
        exit(0);
    }
    else
        input(nv,n,fr);
    output(nv,n,fr);
    getch();
}

void input(nhanvien nv[],int n, FILE *fr)
{
    int i ;
    for(i=0;i<n;i++)
        {
            printf("\nNhan vien %d\n",i+1);
            printf("Nhap ten: ");
            fflush(stdin);
            gets (nv[i].ten);
            printf ("Tuoi ");
            scanf ("%d", &nv[i].tuoi);
            printf ("Gioi tinh ");
            scanf ("%s",&nv[i].gioiTinh);
            fwrite (&nv[i],sizeof(nhanvien),1,fr);
        }
    fclose(fr);
}

void output(nhanvien nv[],int n,FILE *fr)
{
    int i;
    printf ("%12s %5s %10s", "TEN","TUOI","GIOI TINH\n");
    fr = fopen("D:\\loc.txt","rb");
    for (i=0;i<n;i++)
    {
        fread(&nv[i],sizeof(nhanvien),1,fr);
        printf ("%12s %5d %10s\n",nv[i].ten,nv[i].tuoi,nv[i].gioiTinh);

    }
    fclose(fr);
}

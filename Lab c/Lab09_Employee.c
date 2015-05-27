#include<stdio.h>
#include<string.h>

#define MAX 50

struct NhanVien{
	   char hoten[MAX];
	   int maso;
};
typedef struct NhanVien nhanvien;

void input(nhanvien nv[],int n,FILE *fr);
void output(nhanvien nv[],int n, FILE *fr);

int main(){
	FILE *fr;
	int n;
	nhanvien nv[MAX];
	printf("Nhap vao so nhan vien: ");
	scanf("%d", &n);
	if ((fr=fopen("Lab09_employee.txt","wb"))==NULL){
	   printf ("Ko mo dc file");		
	   exit(0);
 	  }
    else
 		input(nv,n,fr);
 	output(nv,n,fr);
	
    getch();
}

void input(nhanvien nv[],int n,FILE *fr){
	 int i;
	 for (i=0;i<n;i++) {
		 printf("\nNhan vien thu %d :", i+1);
		 printf("\nMa nhan vien ");
		 scanf("%d",&nv[i].maso);
		 printf("Nhap vao ho ten ");
		 fflush(stdin);
		 gets(nv[i].hoten);
  		 fwrite(&nv[i], sizeof(nhanvien),1,fr);
	 }
	 fclose(fr);
}
void output(nhanvien nv[],int n, FILE *fr){
	 int i;
	 fr = fopen("Lab09_employee.txt","r");
	 printf("MA SO | HO TEN\n");
	 while (fread(&nv[i],sizeof(nhanvien),1,fr)==1)
		   printf("%-5d  %-10s\n", nv[i].maso,nv[i].hoten);
    	   i++; 
	 fclose(fr);
}

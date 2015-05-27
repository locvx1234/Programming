//Ghi danh sach sinh vien va doc nhung sinh vien co tong diem >= 15
#include <stdio.h>

struct diemthi {
	   float toan;
	   float ly;
	   float hoa;
};
typedef struct diemthi DiemThi;

struct sinhvien{
	   char hoTen[50];
	   char ngaySinh[15];
	   char truong[50];
	   int soBaoDanh;
	   DiemThi diem;
};
typedef struct sinhvien SinhVien; 
//Dinh nghia prototype
void input(SinhVien sv[], int n,FILE *f);
void output(SinhVien sv[], int n,FILE *f);

int main(){
	SinhVien sv[50]; 
	int n;
	FILE *f;
	printf("Nhap so sinh vien: ");
	scanf("%d", &n);
	if ((f=fopen("Lab09_student.txt","w"))==NULL){
	   printf ("Khong the mo file");
       exit(0);}
    else
		input(sv, n,f);	
	output(sv, n,f);
	getch();
}

void input(SinhVien sv[], int n,FILE *f){
	int i = 0;
	while (i < n){
		  printf("Nhap thong tin sinh vien thu %d\n", i + 1);
		  printf("Ten sinh vien: ");
		  fflush(stdin);
		  gets(sv[i].hoTen);
		  printf("Ngay sinh: ");
		  fflush(stdin);
		  gets(sv[i].ngaySinh);
		  printf("Truong: ");
		  fflush(stdin);
		  gets(sv[i].truong);
		  printf("So bao danh: ");
		  scanf("%d", &sv[i].soBaoDanh);
		  printf("Diem thi Toan: ");
		  scanf("%f", &sv[i].diem.toan);
		  printf("Diem thi Ly: ");
		  scanf("%f", &sv[i].diem.ly);
		  printf("Diem thi Hoa: ");
		  scanf("%f", &sv[i].diem.hoa);
		  fwrite(&sv[i],sizeof(SinhVien),1,f);	
		  i++;
	}
	fclose(f);
}

void output(SinhVien sv[], int n,FILE *f){
	int i=0;
	float tongdiem;
	printf("---------------------------------------------------------------------\n");
	printf("                      DANH SACH NHAN VIEN                            \n");
	printf("%-18s %-12s %-16s %-15s %-10s\n", "Ho ten", "Ngay sinh", "Truong", "So bao danh", "Diem");
	printf("---------------------------------------------------------------------\n");
	f = fopen("Lab09_st.txt","rb");
	for (i=0;i<n;i++){
 		fread(&sv[i],sizeof(SinhVien),1,f);
		tongdiem = sv[i].diem.toan + sv[i].diem.ly + sv[i].diem.hoa;
		if (tongdiem >= 15)
		   printf ("%-18s %-12s %-16s %-15d %-10.1f\n", sv[i].hoTen, sv[i].ngaySinh,
				  sv[i].truong, sv[i].soBaoDanh, tongdiem);
		
	}
	fclose(f);
}

//Bai tap viet cac ham: nhap so phan tu va cac phan tu do, in ra day sap xep va Max 

#include <stdio.h>
#include <conio.h>

#define MAX 100

void input_array(float a[],int* n);
void sort(float a[], int dau, int cuoi);
void MaxOutput(float a[], int* n);

int main(){
 	int *n;
 	n = (int *) malloc(2);
 	float a[MAX];
 	input_array(a,n);
	sort(a,0,*n-1);	
	MaxOutput(a,n);
	free(n);
	getch();
}
void input_array(float a[],int* n){
	 int i;
	 printf ("Nhap so phan tu cua mang ");
 	 scanf ("%i",n);
	 printf("Nhap cac phan tu: \n");
 	 for (i=0;i<*n;i++){
	 	 printf ("a[%d] = ", i+1);
	 	 scanf ("%f", &a[i]);
		 }
	 }
	  
void sort(float a[], int dau, int cuoi){
	 int i=dau, j=cuoi;
	 float giua,ctemp;
	 giua = a[(i+j)/2];
  	 if (i>j) return;
  	 while (i<=j){
  	 	   while (a[i]< giua) i++;
	   	   while (a[j]> giua) j--;
	 	   	  	 ctemp = a[i];
	 	   	  	 a[i] = a[j];
	 	   	  	 a[j] = ctemp; 
			 	 i++;
		  	 	 j--;
		  sort(a,i,cuoi);
		  sort(a,dau,j); 
     }
}
void MaxOutput(float a[], int* n){
	int i;
	float max = a[0], t;
	printf("Sort list: ");
	for(i=0;i<*n;i++)printf("%2.2f  ",a[i]);
    for (i=0;i<*n;i++){
     	if (a[i] >max)
     	max = a[i];
 		}
	printf ("\nMax : %2.2f",max);
}


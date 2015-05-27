//Bai tap nhap vao mang a va b, xuat ra mang c sap xep
#include <stdio.h>
#include <conio.h>

#define MAX 100

void input_array(float a[],int n);
void sort(float a[], int n);
void mergasort(float a[], float b[],int n, int m,float c[]);
void output(float a[],int n,int m,float b[],float c[]);

int main(){
 	int n,m;
 	float a[MAX],b[MAX],c[MAX];
  	printf ("Nhap so phan tu cua mang a ");
 	scanf ("%i",&n);
 	input_array(a,n);
 	printf ("Nhap so phan tu cua mang b ");
 	scanf ("%i",&m);
 	input_array(b,m);
	sort(a,n);
	sort(b,m);
	mergasort(a,b,n,m,c);
	output(a,n,m,b,c);
	getch();
}
void input_array(float a[],int n){
	 int i;
	 printf("Nhap cac phan tu: \n");
 	 for (i=0;i<n;i++){
	 	 printf ("a[%d] = ", i+1);
	 	 scanf ("%f", &a[i]);
		 }
	 }
	  
void sort(float a[], int n){
	 int i, j;
	 float temp;
  	 for (i=0;i<n-1;i++)
	   for (j=i+1;j<n;j++)
	   	   if (a[i]>=a[j]){
	   	   	  temp = a[i];
			  a[i] = a[j];
		   	  a[j] = temp; 
 		   } 		  
}
void mergasort(float a[], float b[],int n, int m,float c[]){
	 int k=0,i=0,j=0;
	 while (i<n&&j<m){
	 	   if (a[i]<b[j])
	 	   	  c[k++] = a[i++];
   	  	   else 
				c[k++] = b[j++];
     }
	 while (i<n)	  
		   c[k++] = a[i++];
     while (j<m)
    	   c[k++] = b[j++];
}	   		
void output(float a[],int n,int m,float b[], float c[]){
	 int k=0,j=0,i=0,t;
	 printf("Sorted a:	");
	 for(i=0;i<n;i++)printf("%2.2f	",a[i]);
	 printf("\nSorted b:	");
	 for(i=0;i<m;i++)printf("%2.2f	",b[i]);
	 printf("\nSorted c:	");
	 for(k=0;k<(m+n);k++)printf("%2.2f	",c[k]);	
}

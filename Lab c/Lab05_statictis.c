//Lab05_statictis
#include<stdio.h>
#include<conio.h>
#include<math.h>
float standar(int a[], int n);
float average(int a[], int n);

int main(){
    int i,n,a[50];
    printf("Nhap so phan tu cua day:\n ");
    scanf("%d", &n); 
    printf("Moi ban nhap vao day so:\n");     
    for (i=0;i<n;i++)
    {   printf ("a[%d] = ", i+1);
        scanf ("%d", &a[i]);    }
    printf("\nKi vong cua day so la : %.2f", average(a,n));
    printf("\nDo lech chuan cua day so la : %.2f", standar(a,n));
    getch();
}
float average(int a[], int n){ 
    int i,t=0;
    for (i=0;i<n;i++)
    t+=a[i];
    return (float)t/n;  
}
float standar(int a[],int n){
    int i;
    float s=0,g;
    for (i=0;i<n;i++)    
        s += (a[i]-average(a,n))*(a[i]- average(a,n));
    g = (float)sqrt(s/n);
    return (float)g;
}
        
    

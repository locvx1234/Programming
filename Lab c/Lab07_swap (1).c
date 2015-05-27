#include<stdio.h>

void swap(int *a, int *b);
int main(){
       int a=5, b=7;
       swap(&a,&b);
       printf("a = %d,b = %d \nSum = %d" ,a,b, a+b);
       
       getch();
       }
void swap(int *a, int *b)
{
     int temp = *a;
     *a=*b;
     *b=temp;
     }

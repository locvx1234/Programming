#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void printArray(int *array, int size);
main(){ 
       int i;
       int *p1,*p2,*s;
       
       
       p1 = (int*) malloc(3);
       p2 = (int*) malloc(3);
       s = (int*) malloc(3);
       printf("Nhap vao cac phan tu mang 1:\n");
       for (i=0; i<3;i++)
       scanf("%d", p1+i);
       printf("Nhap vao cac phan tu mang 2:\n");
       for (i=0; i<3;i++)
       scanf("%d", p2+i);
       
       for (i=0; i<3;i++)
       *(s+i)=*(p1+i)+*(p2+i);
       
       printArray(p1,3);
           
       printArray(p2,3);
           
       printArray(s,3);
           
        
       free(s); 
       free(p1);
       free(p2);   
       getch();
       
       }
       
void printArray(int *array, int size)
{
     int i;     
     for(i=0;i<size;i++)
     printf("%d ", array[i]);
     printf("\n");
     }

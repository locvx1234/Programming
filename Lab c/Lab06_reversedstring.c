#include <stdio.h>
#include<conio.h>
#include<string.h>
int main (){
    int i,n;
    char chuoi[30],t;
    printf ("Nhap vao 1 chuoi : ");
    
    gets(chuoi);
    n = strlen(chuoi)-1;   
    for (i=0;i<(n/2);i++)
    {
        t = chuoi[i];
        chuoi[i] = chuoi[n-i];
        chuoi[n-i] = t;                 
    }
    puts(chuoi);
getch();
}

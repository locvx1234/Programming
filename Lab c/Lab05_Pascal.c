//Lab05_pascal
#include<stdio.h>
#include <conio.h>

main (){
     int i,j,n, a[10][10];
     printf ("Nhap bac cua tam thuc Pascal : ");
     scanf("%d", &n);
     
     for (i=1;i<=n;i++)
     for (j=1;j<=n;j++)
     a[i][j] = 0;
     for (j=1;j<=n;j++)
         {a[1][j] = 1;
         a[j][j] = 1;}
     for (j=3;j<=n;j++)
     for (i=2;i<=j;i++)
     a[i][j] = a[i][j-1]+a[i-1][j-1];
     printf ("Day Pascal bac %d la: \n", n);
     for (j=1;j<=n;j++)
     {
     for (i=1;i<=j;i++)
     
         printf ("%2d ", a[i][j] );
         printf ("\n");
         }   
getch();
}
          

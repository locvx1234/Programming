//Lab5_series

#include<stdio.h>
#include <conio.h>



main()
{
      int n,a[50],i;
      printf ("Nhap so phan tu cua day: n = ");
      scanf ("%d", &n);
      printf ("Nhap cac phan tu trong day : ");
      for (i =0; i<n;i++)
      {printf ("[%d] = ", i+1);
          scanf ("%d", &a[i]);}
     printf ("Gia tri nho nhat %d", min(a,n));
    
     getch();
      
}

int min(int a[], int n)
{
    int i,m ;
    m = a[0];
    for (i=0; i<n;i++)
       if ( m>=a[i])
        m = a[i];
        return m;
}
/*
int max(int a[MAX])
{
    int i,max ;
    max = a[1];
    for (i=0; i<=n;i++)
    {   if (a[i] > max)
        max = a[i]}
        printf ("Gia tri lon nhat: %d", max);
}        
        
int tongchan(int a[MAX])
{
    int i,s=0, tongchan;
    for (i=0; i<=n;i++)
    {
        if (a[i]%2 ==0)
        s += a[i];
        }
    printf ("Tong cac gia tri chan la %d", s);
}

int sole(int a[MAX])
{
    int i,j=0, sole;
    for (i=0;i<=n;i++)
    {
        if (a[i]%2 ==1)
        j++
        }
        printf ("So gia tri le la %d", j);
}
      */
      


    #include <iostream>
    #include <stdio.h>

    int p[8] = {-2,-2,-1,-1,1,1,2,2};
    int q[8] = {-1,1,-2,2,-2,2,-1,1};
    int d = 0, x, y, n, a[50][50];
    void inkq()
    {
     cout << endl << "Cach di thu " << ++d << ":" << endl;
     for (int i=0;i<n;i++)
     {
      for (int j=0;j<n;j++)
       printf("%3d",a[i][j]);
      cout << endl;
     }  printf ("aaa \n");
    }
    void tim(int x, int y, int k)  {
        printf("k = %d \n", k);
     //if (k%5==1 || k>n*n) inkq(k-1);
     if (k >= n*n) inkq();
     else
        for (int i=0;i<8;i++)  {
            int x1 = x+p[i], y1 = y+q[i];
            if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < n)
                if (a[x1][y1] == 0)  {
                    a[x1][y1] = k;
                    tim (x1, y1, k+1);
                    a[x1][y1] = 0;
                    }
        }
    }
    int main()
    {
     cout << "Kich thuoc ban co : ";
     cin >> n;
     cout << "Nhap vi tri xuat phat (x,y) :";
     cin >> x >> y;
     for (int i=0;i<n;i++)
      for (int j=0;j<n;j++)
       a[i][j]=0;
     a[x][y]=1;
     tim(x,y,1);
     if (d==0)
      cout << "Khong ton tai cach di thoa man";
     else
      cout << "Co tat ca " << d << " cach di thoa man";
     getch();
     return 0;
    }

#include <iostream>
#include "iomanip"
#include "Matran.h"
using namespace std;


//Khoi tao ma tran
MT::MT(int a, int b): n(a), m(b) {}
MT::MT(){
    for (int i = 0; i < MAX ; i++)
        for (int j = 0; j < MAX ; j++)
            a[i][j] = 0;
    n = m = 0;
}

//Nhap ma tran
istream&  operator >> (istream &is, MT &x)  {
 	cout << " Nhap so hang va so cot cho ma tran: " << endl;
 	is >> x.n;  //so hang
 	is >> x.m;  //so cot
 	cout << "Nhap cac phan tu: \n" ;
 	for (int i = 1; i <= x.n; ++i)
 	for (int j = 1; j <= x.m; ++j)  {
 		cout << "PT hang " << i << " cot " << j << " = " ;
 		is >> x.a[i][j] ;
    }
 	return is;
}
//In ma tran
ostream& operator << (ostream &os, const MT &x)  {
 	os << setprecision(3) << setiosflags (ios::showpoint);
 	for (int i = 1; i <= x.n; ++i)  {
 		os << "\n" ;
        for (int j = 1; j <= x.m; ++j)
            os << setw(6) << x.a[i][j] ;
    }
 	os << "\n" ;
 	return os;
}
//Cong hai ma tran '
MT operator + (const MT &x1,const MT &x2)  {
 	if ((x1.n != x2.n) || (x1.m != x2.m) )  {
 		cout << "\n Khong thuc hien duoc phep cong va tru 2 ma tran" << endl;
    }
 	else  {
        cout << "Tong 2 ma tran: \n" ;
 		MT b  = x1;  int i, j, n = x1.n, m = x1.m;
 		for (i = 1; i <= n; ++i)
 		for (j = 1; j <= m;++j)
 			b.a[i][j] = x1.a[i][j] + x2.a[i][j] ;
        return b;
 	}
}
//Tru hai ma tran
MT  operator - (const MT &x1,const MT &x2)  {
 	if ((x1.n == x2.n) && (x1.m == x2.m) )  {
        cout << "Hieu 2 ma tran: \n" ;
 		MT c = x1;
 		int i, j, n = x1.n, m = x1.m ;
 		for (i = 1; i <= n; ++i)
            for (j = 1; j <= m ; ++j)
                c.a[i][j] = x1.a[i][j] - x2.a[i][j] ;
 		return c;
 	}
}

MT:: ~MT() {}

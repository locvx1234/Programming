#include "iostream"
using namespace std;

int main()
{
    int a,b,c;
    cout << "Nhap vao 3 so duong ";
    cin >> a >> b >>c;
    if (a>0 &&b >0 && c>0)
    {
       if ((a+b)>c && (a+c) > b && (b+c) >a)
       {
          if (a==b && a==c )
             cout << "Tam giac deu ";
          else if ( (a==b && (a*a + b*b == c*c)) || (a==c && (a*a + c*c == b*b)) || (b==c && (b*b + c*c == a*a)) ) 
               cout << "Tam giac vuong can";
          else if ( a==b || a == c || b==c)
               cout << "Tam giac can";
          else if ( (a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a) ) 
               cout << "Tam giac vuong ";
          else 
               cout << "Tam giac thuong";
               }
               }
    else 
         cout << "So duong co ma";
         system ("pause");
            
    return 0;
}

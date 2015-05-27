/* Nhap vao 3 so
 * In ra tong , trung binh , tich , MAX , MIN cua cac so do
 *
 */
#include "iostream"
using namespace std;

int main()
{
    int a,b,c, MAX, MIN;
    cin >> a >> b >> c ;
    MAX = a;
    MIN = b;
    if (b > a )
    {
        MAX = b;
        MIN = a;
    }
    if (c > MAX)
        MAX = c;
    if (c < MIN)
        MIN =c;
    cout << "Sum = " << a+b+c << endl << "Average = " << float(a+b+c)/3 << endl << "Tich = " << a*b*c << endl << "MAX = " << MAX << endl << "MIN = " << MIN << endl;
    return 0;
}

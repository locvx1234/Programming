/* Nhap 1 ki tu, in ra thong bao
 *      Neu la ki tu thuong thi thong bao chu hoa va nguoc lai
 *      Neu khong la ki tu thi thong bao "char" is not a letter
 */
#include "iostream"
using namespace std;

int main()
{
    char a;
    cin >> a;
    while (cin)
    {
        if (a >= 65 && a <=90 )
            cout << "The lower case character corresponding to " << a << " is " << char(a + 32) << endl;
        else if (a >= 97 && a <=122)
            cout << "The upper case character corresponding to " << a << " is " << char(a - 32) << endl;
        else
            cout << a << " is not a letter "<<endl;
        cin >> a;
    }
    return 0;
}

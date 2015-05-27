/* Nhap vao ban kinh
 * In ra duong kinh, dien tich, chu vi
 * Cho pi = 3.14159
 */
#include "iostream"
using namespace std;
const float PI = 3.14159;
int main()
{
    int r;
    cout << "Ban kinh = " ;
    cin >> r;
    cout << "Duong kinh = " << 2*r << endl << "Dien tich = " << PI*r*r << endl << "Chu vi = " << 2*PI*r << endl ;
    return 0;
}

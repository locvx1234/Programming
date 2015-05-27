/*  Nhap so nguyen duong N,
 * chuyen N tu he co so a sang b
 */

#include "iostream"
#include "math.h"
using namespace std;
int a_to_10(int N, int a)
{
    int s =0, co_so;
    for (int i = 0 ; N > 0; i++)
    {

        co_so = N%10;
        N = N/10;
        s += co_so*pow(a,i);
    }
    return s;
}

int muoi_to_b(int s, int b)
{
    int chuoi[100], i = 0 ;
    while (s > 0)
    {
        chuoi[i] = s % b;
        s = s/b;
        i++;
    }
    int a ;
    a = i;
    for (i = a-1; i >=0; i-- )
    {
        cout << chuoi[i];
    }

    return 0;
}

int main()
{
    int N, a, b,s ;

    cin >> N >>a >> b;
    while (cin)
    {
    cout << a_to_10(N, a) << "  ";
    s = a_to_10(N, a);
    muoi_to_b(s,b);
    cin >> N >>a >> b;
    }
    return 0;
}

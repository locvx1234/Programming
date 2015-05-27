/* Nhap vao mang khong qua 20 phan tu
 * In ra mang sap xep theo thu tu tang dan
 * Nhap so 0 la ket thuc nhap
 */
#include "iostream"
using namespace std;
int main()
{
    int a[20];
    int i;
    for (i = 0; i < 20 ; i++)
    {
        cin >> a[i] ;
        if (a[i] == 0)
            break;
    }
    int so_phan_tu ;
    so_phan_tu = i;
    for (int i = 0 ; i < so_phan_tu-1 ; i++)
    {
        for (int j = i+1; j < so_phan_tu; j++)
        {
            if (a[j] < a[i])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0 ; i < so_phan_tu ; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

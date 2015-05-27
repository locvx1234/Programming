/* Nhap day so thuc vao mang
 * Tinh trung binh cong va gia tri MAX
 */
#include "iostream"
using namespace std;
int input(float ar[],int N)
{
    for (int i = 0 ; i < N ; i++)
    {
        cin >> ar[i];
    }
    return 0;
}
float average(float ar[],int N)
{
    float sum = 0;
    for (int i = 0 ; i < N ; i++)
    {
        sum += ar[i];
    }
    return sum/N;
}
float MAX(float ar[], int N)
{
    float MAXar = ar[0];
    for (int i = 0 ; i < N ; i++)
    {
        if (ar[i] >= MAXar)
            MAXar = ar[i];
    }
    return MAXar;
}
int vitri(float ar[], int N, float maxx)
{
    int sumj, br[100] , j = 0;
    for (int i = 0 ; i < N ; i++)
    {
        if (ar[i] == maxx)
        {
            br[j] = i;
            j++;
        }
        sumj = j;
    }
    for (j=0; j < sumj; j++)
    {
        cout << br[j] << "  " ;
    }
    return 0;
}
int main()
{
    int N;
    float ar[100];
    cin >> N;
    input(ar, N);
    cout << "Average: " << average(ar, N) << endl;
    float maxx;
    maxx = MAX(ar, N);
    cout << "Max: " << MAX(ar, N) << endl;
    cout << "Vi tri xuat hien: " << endl;
    vitri(ar, N, maxx);
    return 0;
}

#include "iostream"
using namespace std;
int isNguyenTo(int N)
{
    for (int i = 2; i <N/2 ;i++)
    {
        if (N%i == 0)
           return 0;
    }
}
int bieuDienTheo_k(int N, int k)
{
    
    return 0;
    
}
int main()
{
    int N,k;
    cout << "Nhap mot so: ";
    cin >> N;
    if (isNguyenTo(N))
       cout << "La so nguyen to"<<endl;
    else 
         cout << "Khong la nguyen to"<<endl;
         
    cout << "Nhap so k (k<N) ";
    cin >> k;
    system("pause");
    
    return 0;
}

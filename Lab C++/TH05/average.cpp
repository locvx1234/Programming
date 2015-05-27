
#include "iostream"
using namespace std;

float average(int N)
{
    float a, sum=0;   
    for(int i=0;i<N;i++)
    {
          cin >> a;
          sum += a;
          fflush(stdin);
    }
    return sum/N;
}

int main()
{
    int N;
    cout << "Nhap so phan tu: ";
    cin >> N;
    cout << average(N)<<endl;
    system("pause");
    return 0;
}

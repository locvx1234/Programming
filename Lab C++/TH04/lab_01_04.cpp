/*  Details 
 *  -Khong dung de quy
 *  -Nhap N tu ban phim
 *  -Tinh tong cac chu so nguyen duong nhap tu ban phim
 *  -Tinh so thu N trong day Fibonaci
 *  -Tinh tong cua N so dau tien torng day Fibonaci
 *
 */
#include "iostream"
using namespace std;

int digitSum(int N)
{
    int sum = 0;
    while (N > 0)
    {
          sum += N % 10;
          N /= 10;
    }
    return sum;
}

int fibonaci(int N)
{
    int fibo1 = 1, fibo2 = 1, fibo ;
    for (int i = 0; i < N-2 ; i++)
    {
        fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo; 
    }
    return fibo2;
    
}
int fibonaci_sum(int N)
{
    if (N == 1) return 1;
    int sum = 2;
    int fibo1 = 1, fibo2 = 1, fibo ;
    for (int i = 0; i < N-2 ; i++)
    {
        fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo; 
        sum += fibo;
    }
    return sum;
}

int main()
{
    int N;
    cout << "Nhap N :" ;
    cin >> N;
    while (cin)
    {
    cout << "Tong cac chu so cua " << N << " la " << digitSum(N) << endl;
    cout << "So thu " << N << " trong day Fibonaci: " << fibonaci (N) <<endl;
    cout << "Tong cua " << N << " so Fibo dau tien la: " << fibonaci_sum(N) <<endl;
    cin >> N;
    }
    return 0;
}  
  

/*  Details
 *  -Dung de quy
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
    int sum;
    sum = N%10;
    N = N/10;
    if (N>0)
    {
        sum += digitSum(N);

    }
    return sum;
}

int fibonaci(int N)
{
    if (N==1 || N == 2)
       return 1;
    else
        return fibonaci(N-1) + fibonaci (N-2);

}
int fibonaci_sum(int N)
{
    int sum = 1;
    if (N == 1) return 1;
    else
         return fibonaci_sum(N-1) + fibonaci(N) ;
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


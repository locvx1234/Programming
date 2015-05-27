#include "iostream"
#include "cmath"
#include "fstream"
#include <stdlib.h>

using namespace std;
#define FORI(pos, first, last) \
    for (int pos = first; pos <= ((int)(last)) ; pos++)

// xet xem 1 so co phai la so nguyen to hay khong
int is_nguyen_to(int x)
{
    int i;
    if (x<=1) return 0;
    if (x==2) return 1;
    FORI(i, 2, sqrt(float(x)))
    if (x % i==0) return 0;
    return 1;
}

//! \detail tinh tong cac chu so khong phai so nguyen to
int tong_k_ng_to(int sum, int x){
    int a ;
    a = x % 10;
    if (is_nguyen_to(a) == 1)
    {
        sum += a;
    }
    printf("sum = %d\n",sum);
    x = (x)/10;
    if (x != 0)
        tong_k_ng_to(sum, x);
    else
        return sum;
}


int main(){
    int N, *a, sum = 0;
    ifstream Input ("input.txt");
    ofstream Output ("output.txt");
    if (! Input.is_open())
    {
        cout << "Khong the mo file. \n";
        return 0;
    }
    else {
        Input >> N;
        a = new int[N];
        FORI(i , 0 , N)
            Input >> *(a+i);
    }
    FORI(i , 0 , N - 1)
    {
        if( is_nguyen_to(*(a+i)) == 1)
            Output << *(a+i) << "\t" << tong_k_ng_to(sum, *(a+i)) <<endl;
        else
            Output << *(a+i) << "\t" << -1 << endl;

    }
    delete[] a;
    Output.close();
    Input.close();
    system("pause");
    return 0;
}

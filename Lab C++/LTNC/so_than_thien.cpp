//! \brief so than thien la so ma UCLN cua no va dao nguoc cua no = 1
//! \detail input : 2 so a va b
//!         output: so luong so than thien trong khoang (a;b)

#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for (int pos = ((int)(first)); pos < ((int)(last)) ; pos++)

int UCLN(int a,int b)
{
    return (b==0)?(a):UCLN(b,(a)%(b));
}


//! \detail xuat ra so dao nguoc cua number
int backsee(int number,int result=0)
{
    if (number==0) return result;
    return backsee(number/10,result*10+number%10);
}

int main()
{
    int first, last, count = 0;
    cin >> first >> last;
    FORI(i,first,last){
        if (UCLN(i,backsee(i)) == 1)
        {
            cout << i <<endl;
            count++;
        }
    }
    cout << count;
    return 0;
}

#include<iostream>

using namespace std;

int Tong(int x, int y)
{
    return x + y;
}

int Hieu(int x, int y)
{
    return x - y;
}
int Tich(int x, int y)
{
    return x * y;
}
int Thuong(int x, int y)
{
    if(y == 0)
    return x;
    else
    return x / y;
}

int main()
{
    int (*Pointer[4])(int ,int); // Mảng con trỏ hàm Pointer chuyên để trỏ đến các
                                 // hàm trả về kiểu int và có 2 tham số kiểu int
                                 // Muốn con trỏ hàm trỏ được đến hàm thì phải có cùng signature(chữ ký)
    Pointer[0] = Tong;
    Pointer[1] = Hieu;
    Pointer[2] = Tich;
    Pointer[3] = Thuong;
    int x = 1, y = 2;
    for(int i = 0; i < 4; i++)
    cout<<Pointer[i](x,y)<<endl;
}

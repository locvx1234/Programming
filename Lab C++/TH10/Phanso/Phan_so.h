#pragma once
#include <iostream>
using namespace std;

class Phan_so{
    public:
        Phan_so(int tu, int mau);
        Phan_so();
        ~Phan_so();
        void operator = (const Phan_so &ps);
        friend istream& operator >> (istream& is, Phan_so &ps);
        friend ostream& operator << (ostream& os, Phan_so &ps);
        Phan_so operator+(Phan_so);
        Phan_so operator-(Phan_so);
        Phan_so Toi_gian();
        void Output();

    private:
        int tu_so, mau_so,a,b,tmp;
};




#pragma once
#include "iostream"
#include "iomanip"

using namespace std;
//Class infomation on Broading pass
class INFO{
    public:
        INFO();
        Input();
        ~INFO();
        friend ostream& operator << (ostream& os,const INFO &x);
        friend istream& operator >> (istream& is, INFO &x);

    private:
        string carrier, name, from, to, flight, date, gate, seat, month, remarks;

        int day, hour, minute, N;
};

#include "monhoc.h"

void Monhoc::nhapmonhoc()
{
    cout << "Nhap ten mon hoc:";
    cin >> ten;
    cout << "Nhap so tin chi:";
    cin >> sotinchi;
}

const char* Monhoc::layten()
{
    return ten;
}

int Monhoc::laysotinchi()
{
    return sotinchi;
}

Monhoc::Monhoc()
{
    strcpy(ten, "Hello, world!!!");
    sotinchi = 100;
}

void Monhoc::inmonhoc()
{
    cout << "Mon hoc -" << ten
        << "- co " << sotinchi << " tin chi"
        << endl;
}

void Monhoc::copy(Monhoc mh)
{
    strcpy(ten, mh.ten);
    sotinchi = mh.sotinchi;
}

void Monhoc::operator=(Monhoc mh)
{
    strcpy(ten, mh.ten);
    sotinchi = mh.sotinchi;
}

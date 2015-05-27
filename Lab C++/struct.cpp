#include <iostream>
using namespace std;
struct sinhvien
{
    char hoten[50];
    char ngaysinh[20];
    float cannang;
};

void Xuat1SV(sinhvien x)
{
    cout<<"Ten Sinh Vien: "<<x.hoten<<endl;
    cout<<"Ngay sinh: "<<x.ngaysinh<<endl;
}
void Nhap1SV(sinhvien &x)
{

    float cn;
    cout<<"Ten Sinh Vien: ";
    cin.getline(x.hoten,50);

    cout<<"Ngay sinh: ";
    cin.getline(x.ngaysinh,20);

    cout<<"Can nang: ";
    cin>>cn;
    x.cannang=cn;

}


int main()
{
    sinhvien dssv[3];
    int i=0;
    //-------Nhap SV
    for (i=0;i<3;i++)
    {

        cout<<"Nhap sinh vien thu "<<i+1<<endl<<"---------------------------"<<endl;
                Nhap1SV(dssv[i]);
                cout<<endl;
            }
        }

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct hocsinh
{
    char ho[5];
    char ten[5];
    char eamil[20];
    int mshs, toan, ly, hoa, sdt;
};

int n;
void nhap(hocsinh hs[],int n)
{
    cout<<"\tNhap vao so luong hocsinh:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"\t--Nhap vao thong tin hocsinh thu "<<i+1<<"--\n";
    cout<<"\tNhap vao ho hs : ";
    fflush(stdin);
    gets(hs[i].ho);
    cout<<"\tNhap vao ten hs : ";
    fflush(stdin);
    gets(hs[i].ten);
    cout<<"\tNhap vao MSHS : ";
    cin>>hs[i].mshs;
    cout<<"\tNhap vao sdt : ";
    cin>>hs[i].sdt;
    cout<<"\tNhap vao diem toan : ";
    cin>>hs[i].toan;
    cout<<"\tNhap vao diem ly : ";
    cin>>hs[i].ly;
    cout<<"\tNhap vao diem hoa : ";
    cin>>hs[i].hoa;
}

}
void xuat(hocsinh hs[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<"\t--hoc sinh thu"<<i+1<<"--\n";
    cout<<"\tHo hoc sinh:"<<hs[i].ho<<endl;
    cout<<"\tTEn hoc sinh:"<<hs[i].ten<<endl;
    cout<<"\tMSHS:"<<hs[i].mshs<<endl;
    cout<<"\temail:"<<hs[i].eamil<<endl;
    cout<<"\tSDT:"<<hs[i].sdt<<endl;
    cout<<"\t dien toan:"<<hs[i].toan<<endl;
    cout<<"\t diem ly:"<<hs[i].ly<<endl;
    cout<<"\t diem hoa:"<<hs[i].hoa<<endl;
}

}
void them1(hocsinh hs[],int &n,int x)
{
    hs[n]=x;
    n++;
}
int main()
{

    hocsinh hs[10];
    nhap(hs,n);
    xuat(hs,n);
    int x;
    cout<<"\t them 1 hs";
    cin>>x;
    them1(hs,n,x);
    xuat(hs,n);
    return 0;
}

#pragma once
#include "iostream"
#include "iomanip"
using namespace std;
const int MAX=50;
class MT{
    public:
        MT(int a, int b); // Khoi tao ma tran
        MT();
        ~MT();
        friend istream& operator>> (istream& is, MT& x); //nhap ma tran
        friend ostream& operator<< (ostream& os, const MT& x);// in ma tran
        friend MT operator + (const MT &x1,const MT &x2); //cong 2 ma tran
        friend MT operator - (const MT &x1,const MT &x2); //tru 2 ma tran
    private:
        int n, m; //Cap ma tran [n x m]
        double a[MAX][MAX];  	//Mang chua gia tri cac phan tu
};

#include	<iostream>
#include	<fstream>
#include	<cmath>

using namespace std;

int main(){
	int i , n ;
// viet vao file
	ofstream out ;
	out.open("INPUT.DAT");
	float x, number = 0 ;
	for ( i = 0 ; i < 10 ; i ++){
		cout << "Nhap phan tu thu " << i << " : " ;
		cin >> x;
		out << x << "  " ;
	}
	out.close();
// doc tu file	
	float mang[ 10 ] ;
	ifstream in;
	in.open("INPUT.DAT");
	for ( i = 0 ; i < 10 ; i++){
		in >> x ;
		number = number + x * x ;
	}
	in.close();
	cout << "Tong binh phuong la : " << number ;
	
}

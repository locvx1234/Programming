#pragma once
#include "iostream"
using namespace std;
class Hinhcn  {
 	private:
 		int d, r;  // chieu dai va chieu rong
 	public:
 		void nhapsl(){
 			cout << " \nNhap chieu dai va chieu rong: ";
 			cin >> d >> r;
 			}
 		void in(){
 			cout << "\n chieu dai = " << d ;
 			cout << " chieu rong = " << r;
 		}
 		int dien_tich(){
 			return d*r;
        }
 		int chu_vi(){
 			return 2*(d+r);
        }
};

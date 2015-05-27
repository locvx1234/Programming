#include  <iostream>
#include "HCN.h"
#include "DayHCN.h"
using namespace std;


int main()  {
 	DayHinhcn  d;
 	Hinhcn  hdtmax;
 	d.nhapsl();
 	hdtmax = d.hinh_dt_max();
 	cout << "hinh chu nhat co dien tich max \n";
 	hdtmax.in() ;
 	Hinhcn *hcvmax = d.hinh_cv_max();
 	cout << "\nhinh chu nhat co chu vi max \n";
 	hcvmax->in() ;
}


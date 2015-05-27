#include "iostream"
#include "HCN.h"
#include "DayHCN.h"
using namespace std;

void DayHinhcn::nhapsl(){
 	cout << "So hinh CN = " ;
 	cin >> n;
 	h = new Hinhcn[n+1];
 	for (int i = 1; i <= n; i++)
 		h[i].nhapsl();
}
Hinhcn DayHinhcn::hinh_dt_max(){
 	Hinhcn  hdtmax;
 	hdtmax = h[1];
    for (int i = 2; i <= n; i++)
        if (h[i].dien_tich() > hdtmax.dien_tich() )
            hdtmax = h[i];
 	return hdtmax;
}
Hinhcn  *DayHinhcn::hinh_cv_max(){
 	int imax = 1;
 	for (int i = 2; i <= n; i++)
 		if (h[i].chu_vi() > h[imax].chu_vi() )
 			imax = i ;
 	return  (h+imax);
}

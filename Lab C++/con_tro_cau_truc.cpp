#include <iostream>
#include <stdio.h>
//#include <conio.h>
#include <string.h>

using namespace std;

typedef struct {
	int day;
	int month;
	int  year;
} Date;

typedef struct {
	char ten[20];
	Date sinh_nhat;
	char chuc_vu[20];
	float luong;
} Employee;

/* Khai bao ham khuan mau*/
void InitStruct(Employee *myEmployee);
void Display(Employee *myEmployee);

void InitStruct(Employee *myEmployee){
	cout << "Ten: ";
	cin.getline(myEmployee->ten, 21); // cho phep nhap ca khoang trang
    cout << "ngay sinh : ";
	cin >> myEmployee->sinh_nhat.day;
	cout << "thang sinh: ";
	cin >> myEmployee->sinh_nhat.month;
	cout << "nam sinh: ";
	cin >> myEmployee->sinh_nhat.year;
	cin.get(); // xoa bo dem nhap
	cout << "chuc vu: ";
	cin.getline(myEmployee->chuc_vu, 21);
    cout << "luong: ";
	cin >> myEmployee->luong;
}

void Display(Employee *myEmployee){
    cout << "\n\nTen " << myEmployee->ten << endl;
    cout << "Sinh nhat: " << myEmployee->sinh_nhat.day << "/"
		<< myEmployee->sinh_nhat.month << "/"
		<< myEmployee->sinh_nhat.year << endl;
    cout << "chuc vu: " << myEmployee->chuc_vu << endl;
    cout << "Luong: " << myEmployee->luong << endl;

}

int main(){
    //clrscr();
    Employee *myEmployee = new Employee; // can phai khoi tao truoc khi truyen vao ham khac
    InitStruct(myEmployee);
    Display(myEmployee);
	cin.get(); // lenh nay de xoa bo dem nhap, dau enter xuong dong
    cin.get(); // lenh nay thay cho lenh getch() trong C
	//getch();
	delete myEmployee; // nho xoa con tro cap phat voi new khi khong dung nua
    return 0;
}

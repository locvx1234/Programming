//! \brief practice week 8
//! \detail nhap, xem, sua thong tin sach, so luong sach nhap vao nam 2014, su dung menu
#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for(int pos = ((int)(first)); pos < ((int)(last)); pos++)

typedef struct{
    char title[100], pub_house[100], author[30];
    int pub_year, amount, year_input;
}Book;
int input(Book *bk){
        cout << "Title: ";
        cin.getline(bk->title,100);
        cout << "Publishing house: ";
        cin.getline(bk->pub_house,100);
        cout << "Publishing year: ";
        cin >> bk->pub_year;
        cin.ignore();
        cout << "Author: ";
        cin.getline(bk->author,30);
        cout << "Amount: ";
        cin >> bk->amount;
        cin.ignore();
        cout << "Year of input: ";
        cin >> bk->year_input;
        cin.ignore();
    return 0;
}
int edit(Book *bk){
    int number;
	cout << "Please select a number: "<< endl;
	cout << "1.Title\n2.Publishing house\n3.Publishing year\n4.Author\n5.Amount\n6.Year of input"<<endl;
	cout << "______________________________________________________________________"<<endl;
    cin >> number;
    switch(number){
        case 1:     cin.getline(bk->title,100); break;
        case 2:     cin.getline(bk->pub_house,100);break;
        case 3:     cin >> bk->pub_year;break;
        case 4:     cin.getline(bk->author,30);break;
        case 5:     cin >> bk->amount;break;
        case 6:     cin >> bk->year_input;break;
        default: cout << "Invailid!" << endl;break;
    }
    return 0;
}

int output(Book *bk){
    cout << "Title: "<< bk->title << endl<< "Publishing house: " << bk->pub_house << endl<<"Publishing year: "<< bk->pub_year << endl<< "Author: "<< bk->author << endl<< "Amount: "<< bk->amount << endl<<  "Year of input: " << bk->year_input << endl;
    return 0;
}

int main(){
    int menu, N;
    cout << "How many book do you want to input? ";
    cin >> N;
    Book *bk = new Book[N];
    cout << "   1. Nhap thong tin dau sach\n   2.Xem cac dau sach \n   3.Sua thong tin cac dau sach \n   4. Tinh so luong dau sach thu vien nhap vap nam 2014"<<endl;
    cout << "Please enter a number: " <<endl;
    cin >> menu;
    cin.ignore();
    do {
        FORI(i, 0 , N){
            if (menu == 1){
                cout << "Info of book " << i+1 << endl;
                input(bk+i);
                }
        }
        FORI(i, 0, N){
            if (menu == 2){
                cout << "BOOK " << i+1 << endl;
                output(bk+i);
            }
        }
        if(menu ==3){
            cout << "Please select the BOOK to edit:   ";
            int num;
            cin >> num;
            FORI(i,0,6){
                if (num == i+1){
                    edit(bk+i);
                }
            }
        }
        if(menu == 4){
            int sum = 0;
            FORI(i , 0 , N){
                if((bk+i)->year_input == 2014)
                    sum += (bk+i)->amount;
            }
            cout << "The number of books entered in 2014 was "<< sum <<endl;
        }
    cout << "Complete!" <<endl << "================================================================================"<<endl;
    cout << "   1. Nhap thong tin dau sach\n   2.Xem cac dau sach \n   3.Sua thong tin cac dau sach \n   4. Tinh so luong dau sach thu vien nhap vap nam 2014"<<endl;
    cout << "Please enter a number: " <<endl;
    cin >> menu;
    }
    while (menu != 1);
    return 0;
}

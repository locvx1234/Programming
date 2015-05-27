#include "VNA.h"
#include "iostream"
#include "iomanip"
using namespace std;

INFO::INFO(){};
INFO::~INFO(){};
void Input(){
    while (cin){
        cin >> this;
    }
}
//Enter info
istream& operator >> (istream& is, INFO &x){
    cout << "Hang chuyen cho/CARRIER: " ;  getline(is, x.carrier);
    cout << "Ho va ten/NAME: " ;           getline(is, x.name);
    cout << "Noi di/FROM: ";               getline(is,x.from);
    cout << "Noi den/TO: ";                getline(is, x.to);
    cout << "Chuyen bay/FLIGHT: ";         getline(is, x.flight);
    cout << "Cua/GATE: "        ;          getline(is, x.gate);
    cout << "Ghe/SEAT: "         ;         getline(is, x.seat);
    cout << "Gio/TIME<hh mm>: "   ;        is >> x.hour >> x.minute;
    cout << "Gio/DATE<day MON>: "  ;       is >> x.day >> x.month;
    cout << "Ghi chu/REMARKS: "     ;      getline(is, x.remarks);
}

//Print info
ostream& operator << (ostream& os,const INFO &x){
    cout << endl;
    cout << "___________________________________________________________________________" <<endl;
    cout << "|^_^ VIETNAM AIRLINES                                        Economy Class|" <<endl;
    cout << "|_________________________________________________________________________|" <<endl;
    cout << "| Hang chuyen cho/CARRIER                                                 |"<< endl;
    os <<   "| " << setw(17) <<x.carrier<<  setw (56)<<                               "|" <<endl;
    cout << "| Ho va ten/NAME               Chuyen bay/FLIGHT       Ngay/DATE          |" <<endl;
    os <<   "| " << setw(17)<<x.name << setw(25) << x.flight  << setw(15) << x.day << setw(3) << x.month << setw(13) << "|"<<endl;
    cout << "| Noi di/FROM                  Cua/GATE     Gio len may bay/BOARDING TIME |" << endl;
    os <<   "| " << setw(17)<<x.from << setw(25) <<  x.gate << setw(15) <<  x.hour<< ':' <<setw(2) << x.minute << setw(12) << "|"<<endl ;
    cout << "| Noi den/TO                   Ghe/SEAT                                   |" << endl;
    os <<   "| " << setw(17)<<x.to << setw(25) << x.seat << setw(31) <<               "|"<<endl;
    cout << "| Ghi chu/REMARKS:                                                        |" <<endl;
    os <<   "| " << setw(70)<<x.remarks<< setw(3) <<                                  "|"<<endl;
    cout << "|_________________________________________________________________________|" <<endl;
}

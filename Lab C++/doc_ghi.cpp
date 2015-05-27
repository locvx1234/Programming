// ./Home/Dropbox/LabC++
// Filename : doc_ghi.cpp
// 8/5/2015
#include "iomanip"
#include "fstream"
#include "iostream"
using namespace std;
//Doc du lieu tu file input.dat , ghi cac so le vao file output.dat, moi dong trong file chua 10 so
int main(){
    ofstream  os;
    ifstream  is;
    is.open("input.dat", ios::in); //is.open("input.dat");
    os.open("output.dat");
    int var, count = 0;
    while (is >> var){
        if (var%2 == 1){
            os << var << "\t";
            count ++;
            if (count% 10 == 0){
                os << endl;
            }
        }
    }

    is.close();
    os.close();
    return 0;

}


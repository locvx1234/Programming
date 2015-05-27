#include <iostream>
#include "fstream"
#include "cstdlib"
using namespace std;

void input(){
    ofstream outFile;
    outFile.open("input.dat");
    int var;
    if(!outFile){
            cout << "Can't open file!" << endl;
            exit(1);
    }
    cout << "Enter 10 numbers:" <<endl;
    for(int i = 0; i < 10; i++){
            cin >> var;
            outFile << var << "  ";
    }
    outFile.close();

}

void output(){
    ifstream outFile("input.dat");
    ofstream even("even.dat"), odd("odd.dat");
    int var;
    if(!outFile){
            cout << "Can't open file!" << endl;
            exit(1);
    }
    for (int i = 0 ; i < 10; i++){
        outFile >> var;
        if ((var % 2) == 0){
            even << var << "\t";
        }
        else
            odd << var << "\t";
    }
}


int main()
{
    input();
    output();
    return 0;
}

#include <iostream>
#include "fstream"
#include "cstdlib"
using namespace std;

void input(){
    ofstream outFile;
    outFile.open("input.dat");
    float var;
    if(!outFile){
            cout << "Can't open file!" << endl;
            exit(1);
    }else{
        cout << "Enter 10 numbers:" <<endl;
        for(int i = 0; i < 10; i++){
            cin >> var;
            outFile << var << "  ";
        }
    } //end else
    outFile.close();

}

void output(){
    ifstream dataFile;
    float sum = 0, var;
    dataFile.open("input.dat");
    if(dataFile.fail()){
        cout << "Fail!";
        exit(1);
    }
    cout << "Numbers was entered: ";
    for (int i = 0 ; i < 10 ; i++){
        dataFile >> var ;
        cout << var << "    ";
        sum += var*var;
    }
    dataFile.close();
    cout << "\nSUM SQUARE: " << sum;
}


int main()
{
    input();
    output();
    return 0;
}

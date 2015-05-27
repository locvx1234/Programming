#include "iostream"
#include "cstring"
using namespace std;
const int MAX=1000;
#define FORI(pos, first, last) \
    for(int pos = ((int)(first)); pos < ((int)(last)); pos++)
int cacul(string String, int *letter, int *number, int *space){
    FORI(i , 0 , String.length()){

            if (String[i] >= 48 && String[i] <= 57 ){
                (*number)++;
            }
            if ((String[i] >= 65 && String[i] <= 90)|| (String[i] >= 97 && String[i] <= 122)){
                (*letter)++;
            }
            if (String[i] == 32 ){
                (*space)++;
            }
    }
}

int main(){
    int *letter = new int(0), *number = new int(0), *space = new int(0);
    int i= 0  , j = 0;
    string String;
    cout << "Enter a string : ";
    getline(cin, String);
    cacul(String, letter, number, space);
    cout <<"Letter: "<<*letter <<endl<<"Number: " << *number <<endl << "Space: "<< *space << endl;
    //Bo khoang trang o dau
    while (String[i] == ' ' ){
        i++;
    }
    FORI(i,,)


    cout << String;
    return 0;

}

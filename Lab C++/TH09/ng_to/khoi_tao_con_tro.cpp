#include "iostream"

using namespace std;

int main(){
    int *p;
    p = new int[12](1);
    for (int i = 0; i< 12; i++)
        cout << *(p+i);
    delete []p;
    return 0;

}

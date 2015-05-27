//! \brief use new and detele
#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for (int pos = ((int)(first)) ; pos < (int)(last); pos++)
int main()
{
    int sophantu;
    cin >> sophantu;

    int * mangCapPhatDong = new int[sophantu];
    FORI(i,0,sophantu)
    {
        mangCapPhatDong[i] = i*5;
        cout << mangCapPhatDong[i] << endl;
    }
    delete[] mangCapPhatDong;
    return 0;
}

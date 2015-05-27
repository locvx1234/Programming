// Tinh binh phuong va lap phuong cua cac so tu 0 den 10

#include "iostream"
using namespace std;

int main()
{
    cout << "Number       Square            Cube" <<endl;
    for (int i = 0; i <= 10 ; ++i)
    {
        cout << i << "\t\t" << i*i << "\t\t" << i*i*i << endl;
    }
    return 0;
}

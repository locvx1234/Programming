// In hinh
#include "iostream"
using namespace std;

int main()
{

    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j <=i; j++ )
        {cout << "*";}
        cout << "\n";
    }

    cout << "========================"<<endl;

    for (int i = 1; i < 9; i++)
    {
        for (int j = 8 - i; j >= 0; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout << " *";
        }
        cout << "\n" ;
    }
    return 0;
}

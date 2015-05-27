// Tinh luy thua su dung for loop

#include "iostream"
using namespace std;

int main()
{
    int co_so, so_mu, result = 1;
    cout << "Co so: ";
    cin >> co_so;
    cout << "So mu: ";
    cin >> so_mu;
    for (int i = 0; i < so_mu; i++)
    {
        result *= co_so;
    }
    cout << result << endl;
    return 0;
}

// Do xuc xac
#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;

int xuc_xac(int N)
{
    int result ;
    for (int i=0; i < N ; i++)
    {
        result = 1 + rand () % (6);
        cout << result << "     " ;
    }
    return 0;
}
int main()
{
    int N;
    srand(time(0));
    cout << "So lan gieo xuc xac " ;
    cin >> N;
    xuc_xac(N);
    return 0;
}

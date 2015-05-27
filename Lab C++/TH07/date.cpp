//! \bief Practice week7
#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for (int pos = ((int)(first)); pos < ((int)(last)); pos++)
typedef struct{
    int date, month, year;
}Date;

int main()
{

    Date x[2];
    FORI(i, 0, 2)
    {
        cout << "Person " << i+ 1 <<endl;
        cin >> x[i].date >> x[i].month >> x[i].year;
    }
    if (x[0].year < x[1].year){
        cout << "The first person is older than sec per is" <<endl;
    }
    else if (x[0].year > x[1].year){
        cout << "The first person is younger than sec per is" <<endl;
    }
    else{
        if (x[0].month > x[1].month){
            cout << "The first person is older than sec per is" <<endl;
        }
        else if (x[0].month < x[1].month){
            cout << "The first person is younger than sec per is" <<endl;
        }
        else{
            if (x[0].date > x[1].date){
                cout << "The first person is older than sec per is" <<endl;
            }
            else if (x[0].date < x[1].date){
                cout << "The first person is younger than sec per is" <<endl;
            }
            else
                cout << "The both two peo are the same";
        }

    }
    return 0;
}

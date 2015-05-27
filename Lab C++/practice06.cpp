//! Practice 06

#include "iostream"
using namespace std;
#define FORI(pos, first, last) \
    for (int pos = ((int)(first)); pos < ((int) (last)); pos++)

//! \brief compute average of an array
//! \details input should be an array

double average(double array[], int n)
{
    if (n == 0) return 0;
    double sum  = 0;
    FORI (i, 0 , n)
        sum += array[i];
    return sum / n;

}

//! \brief compute maximum
//! \details find the maximum and its postions in an array
//! \return
int* maximum(double x[], int n, int & count)
{
    int *pos = new int[n];
    count = 0;
    double val = x[0];
    FORI (i , 0 , n)
        if (val < x[i]){
            val = x[i];
            count = 1;
            pos[0] = i;
        }
        else if (val == x[i]){
            pos[count] = i;
            count ++;
        }
    //return val;
}

int main()
{
    int n;
    cin >> n;
    double *a = new double[n];
    FORI (i , 0 , n) cin >> a[i];
    int count;
    int *pos = maximum(a, n,count);
    cout << "Locations = ";
    FORI (i,0,count) cout << pos[i] << "    ";
    cout << endl;
    return 0;
}

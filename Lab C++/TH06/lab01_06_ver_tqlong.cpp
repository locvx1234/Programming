//! \brief Practice Week 6
//! \author Long
#include <iostream>
#include <algorithm>
using namespace std;

#define FORI(pos, first, last) \
    for (int pos = ((int)(first)); pos < ((int)(last)); pos++)

//! \brief compute average of an array
//! \details input should be an array
double average(double array[], int n)
{
    if (n == 0) return 0;
    double sum = 0;
    FORI(i, 0, n)
        sum += array[i];
    return sum / n;
}

//! \brief compute maximum
//! \details find the maximum and its positions in an array
//! \return the positions of the maximum
void maximum(double x[], int n, int* &pos, int& count)
{
    pos = new int[n];
    count = 0;
    double val = x[0];
    FORI(i, 0, n) {
        if (val < x[i]) {
            val = x[i];
            count = 1;
            pos[0] = i;
        } else if (val == x[i]) {
            pos[count] = i;
            count++;
        }
    }
}

//! \brief sort an array with selection algorithm
void selectionSort(double a[], int n)
{
    FORI(i,0,n) {
        int pos = i;
        FORI(j,i+1,n) {
            if (a[j] < a[pos]) pos = j;
        }
        swap(a[i],a[pos]);
    }
}

int main()
{
    int n;
    cin >> n;
    double *a = new double[n];
    FORI(i,0,n) cin >> a[i];

//    int count;
//    int *pos;
//    maximum(a, n, pos, count);
//
//    cout << "Locations = ";
//    FORI(i,0,count) cout << pos[i] << " ";
//    cout << endl;

    selectionSort(a, n);
    cout << "After sorting: ";
    FORI(i,0,n) cout << a[i] << " ";
}

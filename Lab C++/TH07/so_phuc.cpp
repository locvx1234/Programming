//! \brief so phuc
#include "iostream"
#include "cmath"
using namespace std;
#define FORI(pos, first, last) \
    for (int pos = ((int)(first)); pos < ((int)(last)); pos++)

typedef struct{
    int a,b;
}So_phuc;

//! \brief input
//! \detail input imaginary and real.
int set(So_phuc *p, int N)
{
    FORI(i,0,N){
        cout << "The complex number " << i+1 << endl;
        cin >> (p+i)->a >> (p+i)->b;
    }
    return 0;
}

//! \brief output
//! \detail print complex numbers
int get(So_phuc *p, int N)
{
    FORI(i,0,N){
        cout << (p+i)->a << " + " << (p+i)->b <<"i" <<endl;
    }
    return 0;
}

//! \brief modulus
//! \detail compute the complex_number's module
float module(So_phuc *p, int N, float *modu)
{
    float MAX;
    FORI(i,0,N){
        *(modu+i) =  sqrt( pow(((p+i)->a),2) +  pow(((p+i)->b),2) ) ;
    }
    MAX = *(modu+0);
    FORI(i,0,N){
        if(*(modu+i) > MAX)
            MAX = *(modu+i);
    }
    cout << "The complex number have most module: " << endl;
    FORI(i,0,N){
        if(*(modu+i) == MAX)
             cout << (p+i)->a << " + " << (p+i)->b <<"i" <<endl;
    }
    cout << "Module: ";
    return MAX;
}

//! \brief sum
//! \detail compute sum of complex_numbers
float sum(So_phuc *p, int N)
{
    int suma = 0, sumb = 0;
    FORI(i,0,N){
        suma += (p+i)->a;
        sumb += (p+i)->b;
    }
    cout << "The sum : " << endl;
    cout << suma << " + " << sumb << "i" <<endl;
    return 0;
}
int main()
{
    int N;
    cin >> N;
    So_phuc *p = new So_phuc[N];
    set(p,N);
    get(p,N);
    sum(p,N);
    float *modu = new float(N);
    cout << module(p,N, modu);
    delete[] modu;
    delete[] p;
    return 0;

}

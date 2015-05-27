#include <iostream>
using namespace std;
#define FORI(pos, first, last) \
    for(int pos = ((int) (first)); pos < ((int)(last)) ; pos++)
const int MAX=100000;
void khoi_tao(int N, int *p){
    FORI(i , 0, N-1){
        *(p+i) = i + 2;
    }
}

int Eratosthenes(int N, int *p){
    int pos = 0;
    FORI(i, pos, N-1){
        if (*(p+i) == 0) pos++;
        else {
            FORI(j , pos+1, N-1){
                if (*(p+j) % *(p+pos) == 0){
                    *(p+j) = 0;
                }
            }
        pos++;
        }
    }
    return 0;
}

void output(int N, int *p){
    FORI(i , 0 , N-1){
        if (*(p+i) != 0){
            cout << *(p+i) <<endl;
        }
    }
}
int main()
{
    int N;
    cin >> N;
    int *p = new int[N-1];
    khoi_tao(N, p);
    Eratosthenes(N, p);
    output(N, p);
    delete []p;
    return 0;
}

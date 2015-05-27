#include "iostream"

using namespace std;

#define FORI(pos, first, last) \
    for(int pos = ((int)(first)); pos < ((int)(last)); pos++)


const int MAX=100;
int input(int array[], int N){
    FORI(i, 0, N){
        cin >> array[i];
    }
}
int bubble_sort(int array[], int N){
    FORI(i , 0, N-1){
        FORI(j, 0 , N - i - 1){
            if (array[j] > array[j+1]){
                int temp;
                temp       = array[j];
                array[j]   = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int output(int array[], int N){
    FORI(i, 0 , N){
        cout << array[i] << "   ";
    }

}
int main(){
  int array[MAX], N;

  cout << "Nhap so phan tu: " ;
  cin >> N;
  input(array, N);
  bubble_sort(array, N);
  output(array, N);


    return 0;
}

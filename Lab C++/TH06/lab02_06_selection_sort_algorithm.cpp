// Selection sort algorithm

#include "iostream"
#include "algorithm"
using namespace std;

int input(float ar[],int N)
{
    for (int i = 0 ; i < N ; i++)
    {
        cin >> ar[i];
    }
    return 0;
}

int selection_sort(float ar[], int N)
{
    for (int i = 0 ; i < N - 1 ; i++)
    {
        int min = ar[i];
        int pos = i;
        for (int j = i + 1; j < N ; j++)
        {
            if (ar[j] < ar[pos])
            {
                min = ar[j];
                pos = j;
            }
            swap (ar[i], ar[pos]);
        }
    }
    return 0;
}
int PrintArray(float ar[], int N)
{
    for (int i= 0; i < N; i++)
    {
        cout << ar[i] << "  ";
    }
}
int main()
{
    int N;
    float ar[100];
    cout << "How many values do you enter ? " ;
    cin >> N;
    input(ar, N);
    selection_sort(ar , N);
    PrintArray(ar, N);

    return 0;
}

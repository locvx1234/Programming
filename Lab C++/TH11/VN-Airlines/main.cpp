#include <iostream>
#include "VNA.h"
using namespace std;

int main()
{
    INFO *per = new INFO;
    cin >> per;
    per.Input(per);
    cout << per;
    return 0;
}

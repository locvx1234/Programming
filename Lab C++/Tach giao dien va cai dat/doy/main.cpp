#include "DayOfYear.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main( )
{
    DayOfYear today, bachBirthday;
    cout << "Enter today's date:\n";
    today.input( );
    cout << "Today's date is ";
    today.output( );
    cout << endl;
    bachBirthday.set(3, 21);
    cout << "J. S. Bach's birthday is ";
    bachBirthday.output( );
    cout << endl;
    if ( today.getMonthNumber( ) == bachBirthday.getMonthNumber( ) && today.getDay( ) == bachBirthday.getDay( ) )
        cout << "Happy Birthday Johann Sebastian!\n";
    else
        cout << "Happy Unbirthday Johann Sebastian!\n";
    cin.ignore(80, '\n');
    cin.get();
    return 0;
}

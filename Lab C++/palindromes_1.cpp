/* palindromes_1.cpp
 * Details
 *  - Input a string from cin
 *  - Check if the string is a palindrome
 *  - A palindrome is a string that does not change if you reverse it.
 *  - Write to cout: True if it is a palindrome, and False otherwise.
 * Editted : LocVu (locvx1234@gmail.com)
 * Copyright by minhphuong90
 */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int symmetric(char *str); // Check the symmetry of a string
int main()
{
    char str[100];
    cin >> str;
    while (cin)
    {
        if(symmetric(str)==0)
        {
            cout <<"The string isn't symmetric"<<endl;
        }
        else
        {
            cout <<"The string is symmetric"<< endl;
        }
        cin >> str;
    }
}

int symmetric(char *str)
{
    int i,j;
    for( i = 0, j = strlen(str)-1 ; i < strlen(str)/2 ; j--, i++ )
        if( str[i] != str[j] )
        return 0;
        return 1;
}

/* palindromes.cpp
 * Details
 *  - Input a string from cin
 *  - Check if the string is a palindrome
 *  - A palindrome is a string that does not change if you reverse it.
 *  - Write to cout: True if it is a palindrome, and False otherwise.
 * Author : LocVu (locvx1234@gmail.com)
 */
#include "iostream"
#include "string.h"
using namespace std;
int compare(char *String);

int main()
{
    char String[100];
    cin >> String;
    while (cin)
    {
        if (compare(String) == 1)
            cout << "OK, it is a palindrome"<<endl;
        else
        {
            cout << "The string isn't a palindrome"<< endl;


        }

        cin >> String;
    }
}
int compare(char *String)
{
    int i= 0, j = strlen(String)-1; // j = String.size() - 1
    for (; i <= j; i++, j--)
    {
        if (String[i] != String[j])
            return 0;
            return 1;
    }
}


/* palindromes_count_cut.cpp
 * Details
 *      - Input a string from cin
 *      - Check if the string is a palindrome
 *      - A palindrome is a string that does not change if you reverse it.
 *      - Write to cout: True if it is a palindrome, and False otherwise.
 *      Tricky question:
 *      - If a string is not a palindrome, at least how many cuts do you need to cut the string into palindromes ?
 *      For example, aabbbcddc needs 2 cuts.
 * Author : LocVu (locvx1234@gmail.com)
 *
 */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int symmetric(char *str); // Check the symmetry of a string
int cut(char *str);       // Count the number of times a string to cut into symmetric strings
int main()
{
    int i = 0,j = strlen(str)-1;
    char str[100];
    cin >> str;
    while (cin)
    {
        if(symmetric(str)==0)
        {
            cout <<"This string isn't symmetric"<<endl;
            cut(str[strlen(str)-1]);
        }
        else
        {
            cout <<"This string is symmetric"<< endl;
        }
        cin >> str;
    }
}

int symmetric(char *str) //Check the symmetry of a string
{

    for( ; i < strlen(str)/2 ; j--, i++ )
        if( str[i] != str[j] )
        return 0;
        return 1;
}

int cut(char str[strlen(str)-1])
{
    int i,j,count_cut = 0;
    if (symmetric(str) == 1)
    {
         count_cut ++;
         cut (   );// xét hàm cut() với chuỗi từ vị trí i+1 đến cuối dãy
    }
    else
    {
        cut (str[strlen(str)- 1 -i]) //xét hàm cut() từ đầu đến vị trí i
    }
    cout<<count_cut;
}

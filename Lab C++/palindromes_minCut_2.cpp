/* palindromes_minCut.cpp
 * Details
 *  - Input a string from cin
 *  - Check if the string is a palindrome
 *  - A palindrome is a string that does not change if you reverse it.
 *  - Write to cout: True if it is a palindrome, and False otherwise.
 */
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
// brief check if a string is a palindrome
// param str the string to check 
// return true if str is palindrome
int isPalindrome(string str); // Check the symmetry of a string
int minToCutPalindrome(string str);
int main()
{
    string str;
    cin >> str;
    while (cin)
    {
        if(isPalindrome(str)==0)
        {
            cout <<"The string isn't palindrome"<<endl;
            cout << minToCutPalindrome(str)<<endl;
        }
        else
        {
            cout <<"The string is palindrome"<< endl;
        }
        cin >> str;
    }
}

int isPalindrome(string str)
{
    int i,j;
    for( i = 0, j = str.size()-1 ; i < str.size()/2 ; j--, i++ )
        if( str[i] != str[j] )
        return 0;
        return 1;
}
 
int minToCutPalindrome(string str)
{
    vector <int>  numbers (str.size(), 0);
    for (int i= 0 ; i < str.size(); i++)
    {
        cout << "i = " <<i <<endl;
        numbers[i] = i;
        if (isPalindrome ( str.substr(0 , i+1) ) )
        {            
           numbers[i] = 0;
        }
        else 
        for (int j = 0 ; j < i; j++)
        {
            cout << "j = " <<j<< endl;
            cout << str.substr(j+1, i - j)<<endl;
            cout << "number[j] = "<< numbers[j]<< endl;
       
            if (isPalindrome(str.substr(j+1, i - j)))
               if (numbers[i] > numbers[j] + 1)
                  numbers[i] = numbers[j] + 1;
        }
        cout << "----------------"<<endl<<"number[i] = "<< numbers[i]<< endl;
    }
    return numbers.back();
}
        

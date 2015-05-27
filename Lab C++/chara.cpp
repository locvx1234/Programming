/* char_1.cpp
 * Details
 *        Input a character
 *        If it is lower, show "The upper case character 
 *        corresponding to <char> is ...",
 *        If it is upper, show "The lower case character
 *        corresponding to <char> is ...", or 
 *        Else "<char> is not a letter". 
 * Author LocVu <locvx1234@gmail.com>
 *
 */
 
 #include "iostream"
 #include "conio.h"
 
 using namespace std;
 
 int main()
 {
     char chara;
     cout << "Enter a character: ";
     cin >> chara ;
     if (chara < 123 && chara > 96)
     {
          cout << "The upper character corresponding to "<< chara<< " is "<< (char)(chara - 32) << endl;
     }
     else if ( chara >64 && chara < 90)
     {
          cout << "The lower character corresponding to "<< chara<< " is "<< (char)(chara + 32) << endl;
     }
     else 
     {
          cout << chara <<"is not a letter" << endl; 
     }
     getch();
     return 0;
 }

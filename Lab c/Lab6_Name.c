#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main (){
    int i,n;
    char s[30],t;
    printf ("Nhap vao 1 chuoi : ");
    
    gets(s);
    for(i=0;i<=strlen(s);i++)
    s[i]=tolower(s[i]);
    s[0]=toupper(s[0]);
    for (i=0;i<=strlen(s);i++)
    if (s[i]==(' '))
    s[i+1] = toupper(s[i+1]);
    
    
    puts(s);
getch();
}
    

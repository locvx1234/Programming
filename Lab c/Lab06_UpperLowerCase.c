#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
 main (){
    char s[30];int i;
    
    printf("Nhap chuoi muon chuyen sang hoa: ");
	gets(s);
	for (i=0;i<=strlen(s);i++) s[i]=toupper(s[i]);
	printf("Chuoi hoa: ");
	puts(s);
    printf("Nhap chuoi muon chuyen sang thuong: ");
	gets(s);
	for (i=0;i<=strlen(s);i++) s[i]=tolower(s[i]);
	printf("Chuoi thuong: ");
	puts(s);
    getch();
}
    
    
    

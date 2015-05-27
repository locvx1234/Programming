#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
      int i, count =0;
      char *s;
     s = (char*) malloc(50);
     printf("Nhap vao 1 chuoi:");
     gets(s);
     for (i=0; i<strlen(s);i++)
     if(*(s+i) ==' ')
     count ++;
     free(s);
     printf("%d", count);
     getch();
     }

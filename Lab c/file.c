#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
FILE *f;
int in, i;
printf("Nhap vao so n: ");
scanf("%d", &in);
//Ghi file
if((f = fopen("D://locc.txt", "w")) == NULL) //mo file
{
printf("Khong the mo file!.\n");
exit(0);
}
else
for(i = 1; i <= in; i++)
fwrite(&i, sizeof(int), 1, f); //ghi file
fclose(f); //dong file
//Doc file
f = fopen("D://locc.txt", "r");
while(fread(&i, sizeof(int), 1, f) == 1)
printf("%d ", i);
fclose(f);
getch();
}

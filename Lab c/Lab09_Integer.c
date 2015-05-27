#include<stdio.h>


int main(){
	FILE *f;
	int n,i;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	if((f = fopen("Lab09_integer.txt","wb"))==NULL){
		 printf("Khong the mo file");
		 exit(0);
	}
	else
	for (i=1;i<=n;i++)
		fwrite(&i,sizeof(int),1,f);
 	fclose(f);
	
	f=fopen("Lab09_integer.txt","rb");
	while (fread(&i,sizeof(int),1,f)==1)
		  printf("%d ",i);
	fclose(f);
	getch();
	
}

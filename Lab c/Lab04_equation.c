#include <stdio.h>
main(){
	float a,b,c,d,x1,x2;char t;
	do {
		printf("Nhap vao he so a: ");
		scanf("%f",&a);
		printf("Nhap vao he so b: ");	
		scanf("%f",&b);
		printf("Nhap vao he so c: ");
		scanf("%f",&c);
		if (a==0) {
			if (b==0) {
				if (c==0) printf("\nPhuong trinh co vo so nghiem!\n");
				else printf("\nPhuowng trinh vo nghiem!\n");
			}
			else printf("\nPhuong trinh co nghiem x= %.2f\n",-c/b);
		}
		else {
			d=b*b-4*a*c;
			if (d<0) printf("\nPhuong trinh vo nghiem!\n");
			if (d==0) printf("\nPhuong trinh co nghiem kep x= %.2f\n",-b/(2*a));
			x1=(-b+sqrt(d))/(2*a);x2=(-b-sqrt(d))/(2*a);
			if (d>0) printf("\nNGHIEM PHUOHG TRINH\nx1= %.2f\nx2= %.2f\n",x1,x2);
			for (;;){
				puts("\nCo muon tiep tuc khong? <Y/N>");
				t=getchar();	t=getchar();
				if (t=='N' || t=='n' || t=='y' || t=='y') break;
			}
			t=getchar();
			if ((t=='N') || (t=='n')) break;
		}
		
	} while ((t=='Y') || (t=='y'));
}

#include <stdio.h>

int main(){
	int a;
	double angka1, angka2;
	double angka3, angka4;
	double angka5, angka6;
	
	scanf("%d", &a); getchar();
	scanf("%lf %lf", &angka1, &angka2); getchar();
	scanf("%lf %lf", &angka3, &angka4); getchar();
	scanf("%lf %lf", &angka5, &angka6); getchar();
	
	double hasil1=(angka1/100)*angka2;
	double hasil2=(angka3/100)*angka4;
	double hasil3=(angka5/100)*angka6;
	
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	printf("%.2lf\n", hasil3);
	
	return 0;
}

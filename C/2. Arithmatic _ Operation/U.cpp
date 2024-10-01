#include <stdio.h>

int main(){
	int a;
	double degree1, second1;
	double degree2, second2;
	double degree3, second3;
	
	scanf("%d", &a);
	scanf("%lf %lf", &degree1, &second1);
	scanf("%lf %lf", &degree2, &second2);
	scanf("%lf %lf", &degree3, &second3);
	
	double hasil1=degree1*second1/360;
	double hasil2=degree2*second2/360;
	double hasil3=degree3*second3/360;
	
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	printf("%.2lf\n", hasil3);
	
	return 0;
}

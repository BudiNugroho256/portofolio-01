#include <stdio.h>
#include <math.h>

int main(){
	double a, b;
	double c;
	
	scanf("%lf %lf", &a, &b); getchar();
	
	c=a*pow((1+b/100), 3);
	
	printf("%.2lf\n", c);
	
	return 0;
}

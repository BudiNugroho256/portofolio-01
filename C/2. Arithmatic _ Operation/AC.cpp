#include <stdio.h>
#include <math.h>

int main(){
	double x;
	
	scanf("%lf", &x);
	
	double y=pow(2,x);
	
	printf("%.0lf\n", y-1);
	
	return 0;
}

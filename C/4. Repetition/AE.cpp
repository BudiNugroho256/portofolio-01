#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	double r, h;
	double phi = 3.14;
	double result = 0;
	
	for(int i=1;i<=t;i++){
		scanf("%lf %lf", &r, &h);
		result = 2*phi*r*(r+h);
		printf("Case #%d: %.2lf\n", i, result);
	}
	
	return 0;
}

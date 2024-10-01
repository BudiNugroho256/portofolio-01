#include <stdio.h>

int main(){
	int A;
	double a, b, c, d;
	double e, f, g, h;
	double i, j, k, l;
	
	scanf("%d", &A);
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	scanf("%lf %lf %lf %lf", &e, &f, &g, &h);
	scanf("%lf %lf %lf %lf", &i, &j, &k, &l);
	
	double hasil1=(a/1)*2+(b/2)*4+(c/3)*4+(d/4)*2;
	double hasil2=(e/1)*2+(f/2)*4+(g/3)*4+(h/4)*2;
	double hasil3=(i/1)*2+(j/2)*4+(k/3)*4+(l/4)*2;
	
	printf("%.2lf\n", hasil1);
	printf("%.2lf\n", hasil2);
	printf("%.2lf\n", hasil3);
	
	return 0;
}

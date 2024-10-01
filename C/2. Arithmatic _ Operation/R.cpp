#include <stdio.h>

int main(){
	double a, b, c ,d;
	double e, f, g, h;
	double i, j, k, l;
	double hasila, hasilb, hasilc;
	
	scanf("(%lf+%lf)x(%lf-%lf)", &a, &b, &c, &d); getchar();
	scanf("(%lf+%lf)x(%lf-%lf)", &e, &f, &g, &h); getchar();
	scanf("(%lf+%lf)x(%lf-%lf)", &i, &j, &k, &l); getchar();
	
	hasila=(a+b)*(c-d);
	hasilb=(e+f)*(g-h);
	hasilc=(i+j)*(k-l);
	
	printf("%.0lf %.0lf %.0lf\n", hasila, hasilb, hasilc);
	
	return 0;
}

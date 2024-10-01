#include <stdio.h>

int main(){
	double panjang, lebar, tinggi;
	
	scanf("%lf %lf %lf", &panjang, &lebar, &tinggi);
	
	double hasil=(2*(lebar*tinggi/2)+(3*lebar*panjang));
	
	printf("%.3lf\n", hasil);
	
	return 0;
}

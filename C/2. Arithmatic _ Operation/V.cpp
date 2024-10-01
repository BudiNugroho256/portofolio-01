#include <stdio.h>

int main(){
	int hurufkonstan;
	double celcius1, celcius2, celcius3;
	
	scanf("%d", &hurufkonstan);
	scanf("%lf", &celcius1);
	scanf("%lf", &celcius2);
	scanf("%lf", &celcius3);
	
	double reaumur1=4*celcius1/5;
	double fahrenheit1=9*celcius1/5+32;
	double kelvin1=celcius1+273;
	double reaumur2=4*celcius2/5;
	double fahrenheit2=9*celcius2/5+32;
	double kelvin2=celcius2+273;
	double reaumur3=4*celcius3/5;
	double fahrenheit3=9*celcius3/5+32;
	double kelvin3=celcius3+273;
	
	printf("%.2lf %.2lf %.2lf\n", reaumur1, fahrenheit1, kelvin1);
	printf("%.2lf %.2lf %.2lf\n", reaumur2, fahrenheit2, kelvin2);
	printf("%.2lf %.2lf %.2lf\n", reaumur3, fahrenheit3, kelvin3);
	
	return 0;
}

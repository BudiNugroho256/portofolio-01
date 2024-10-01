#include <stdio.h>

int main(){
	char n1[100], n2[100];
	double h1, h2;
	int a1, a2;
	
	scanf("%s", n1);
	scanf("%lf", &h1);
	scanf("%d", &a1);
	scanf("%s", n2);
	scanf("%lf", &h2);
	scanf("%d", &a2);
	
	printf("Name 1: %s\n", n1);
	printf("Height 1: %.2lf\n", h1);
	printf("Age 1: %d\n", a1);
	printf("Name 2: %s\n", n2);
	printf("Height 2: %.2lf\n", h2);
	printf("Age 2: %d\n", a2);
	
	return 0;
}

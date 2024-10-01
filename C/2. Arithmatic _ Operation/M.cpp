#include <stdio.h>

int main(){
	float bibicard, allcard;
	
	scanf("%f %f", &bibicard, &allcard);
	
	float percentage=(bibicard/allcard)*100;
	
	printf("%.2f%%\n", percentage);
	
	return 0;
}

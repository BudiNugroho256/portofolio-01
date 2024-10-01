#include <stdio.h>

int main(){
	float angka1, angka2, angka3;
	
	scanf("%f %f %f", &angka1, &angka2, &angka3);
	
	float angkaa=angka1*20/100, angkab=angka2*30/100, angkac=angka3*50/100;
	float angkaakhir=angkaa+angkab+angkac;
	
	printf("%.2f\n", angkaakhir);
	
	return 0;
}

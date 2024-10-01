#include <stdio.h>

int main(){
	float hargaawal, hargaakhir;
	
	scanf("%f %f", &hargaawal, &hargaakhir);
	
	float hargadiskon= hargaawal-hargaakhir;
	float diskon=(hargadiskon/hargaawal)*100;
	
	printf("%.2lf%%\n", diskon);
	
	return 0;
}

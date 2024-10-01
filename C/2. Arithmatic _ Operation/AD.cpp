#include <stdio.h>

int main(){
	float damage1, damage2, damage3;
	
	scanf("%f %f %f", &damage1, &damage2, &damage3);
	
	float damagea=damage1*20/100, damageb=damage2*30/100, damagec=damage3*50/100;
	float damagetot= damagea+damageb+damagec;
	
	printf("%.2f\n", damagetot);
	
	return 0;
}

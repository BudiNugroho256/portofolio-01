#include <stdio.h>

int main(){
	int angka;
	
	scanf("%d", &angka);
	
	int hasil=angka%2;
	
	if(hasil==0){
		printf("EVEN\n");
	}else{
		printf("ODD\n");
	}
	
	return 0;
}

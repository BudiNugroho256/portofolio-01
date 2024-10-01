#include <stdio.h>

int main(){
	int stars;
	
	scanf("%d", &stars);
	
	for(int i=0;i<stars;i++){
		
		for(int j=0;j<stars;j++){
			
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

#include <stdio.h>

int main(){
	int cages; 
	int animals, result = 0;
	
	scanf("%d", &cages);
	
	for(int i=0;i<cages;i++){
		
		scanf("%d", &animals);
		
		result += animals;
		
	}
	
	printf("%d\n", result);
	
	return 0;
}

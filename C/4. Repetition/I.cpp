#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int other[n];
	int sum = 0;
	int result = 0;
	int jojo, lili, bibi;
	
	scanf("%d %d %d", &jojo, &lili, &bibi);
	
	for(int i=0;i<n;i++){
		scanf("%d", &other[i]);
		sum+=other[i];
	}
	
	result = (sum+jojo+lili+bibi)/(n+3);
	
	if(jojo >= result){
		printf("Jojo lolos\n");
	}else{
		printf("Jojo tidak lolos\n");
	}
	if(lili >= result){
		printf("Lili lolos\n");
	}else{
		printf("Lili tidak lolos\n");
	}
	if(bibi >= result){
		printf("Bibi lolos\n");
	}else{
		printf("Bibi tidak lolos\n");
	}
	
	return 0;
}

#include <stdio.h>

int main(){
	long long int n, k;
	scanf("%lld %lld", &n, &k);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("#");
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i%k == 0){
				printf("#");
			}else{
				printf(".");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j%k == 0){
				printf("#");
			}else{
				printf(".");
			}
		}
		printf("\n");
	}
	
	return 0;
}

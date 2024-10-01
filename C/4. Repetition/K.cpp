#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int n;
	
	for(int i=1;i<=t;i++){
		scanf("%d", &n);
		
		printf("Case #%d:\n", i);
		
		for(int j=1;j<=n;j++){
			for(int k=j;k<n;k++){
					printf(" ");
			}
			for(int k=n-j;k<n;k++){
				if((j+k+1)%2 == 0){
					printf("*");
				}else{
					printf("#");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}

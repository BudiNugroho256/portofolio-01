#include <stdio.h>

int main(){
	int t;
	int n;
	
	scanf("%d", &t);
	
	for(int i=1;i<=t;i++){
		
		scanf("%d", &n);
		
		long long int hasil = 0;
		int nilai[n][n];
		
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				
				scanf("%d", &nilai[j][k]);
				
			}
			
		}
		
		printf("Case #%d:", i);
		
		for(int j=0;j<n;j++){
			
			for(int k=0;k<n;k++){
				
				hasil += nilai[k][j];
				
			}
			
			printf(" %lld", hasil);
			
			hasil = 0;
			
		}
		
		printf("\n");
		
	}
	
	
	return 0;
}

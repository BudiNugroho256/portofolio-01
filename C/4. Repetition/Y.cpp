#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int n, m;
	
	for(int i=1;i<=t;i++){
		scanf("%d %d", &n, &m);
		printf("Case #%d:\n", i);
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				if(j == 0 || j == n-1 || k == 0 || k == m-1){
					printf("#");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}

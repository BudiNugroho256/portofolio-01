#include <stdio.h>

int main(){
	int k, i;
	
	scanf("%d", &k);
	
	int a[k][k];
	int b[k] = {0};
	
	for (i=0;i<k;i++){
		for(int j=0;j<k;j++){
		scanf("%d", &a[i][j]);
		if(a[i][j] != 0){
			b[a[i][j]-1]++;
		}
		}

	}
	
	int zero = 0;
	
	for(i=0;i<k;i++){
		if(b[i] < k){
			zero++;
		}
	}
	
	printf("%d\n", zero);
	
	return 0;
}

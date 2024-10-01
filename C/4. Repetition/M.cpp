#include <stdio.h>

int main(){
	long long int t;
	scanf("%lld", &t);
	long long int n[1000] = {0}, m;
	long long int sum = 0;
	
	for(int i=1;i<=t;i++){
		scanf("%lld %lld", &n[i], &m);
		long long int temp = n[i];
		for(int j=1;j<=temp;j++){
			scanf("%d", &n[j]);
			sum+=n[j];
		}
		
		printf("Case #%d: ", i);
		
		if(sum <= m){
			printf("No worries\n");
		}else{
			printf("Wash dishes\n");
		}
		sum = 0;
	}
	
	return 0;
}

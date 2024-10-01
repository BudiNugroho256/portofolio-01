#include <stdio.h>

int main(){
	long long int i;
	long long int k;
	long long int a, b;
	
	scanf("%lld", &k);
	
	for(i=0;i<k;i++){
		scanf("%lld %lld", &a, &b);
		if(a>b){
			printf("Case #%lld: Go-Jo\n", i+1);
		}else{
			printf("Case #%lld: Bi-Pay\n", i+1);
		}
	}
	return  0;
}

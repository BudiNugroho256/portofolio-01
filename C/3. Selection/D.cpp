#include <stdio.h>

int main(){
	long long int i;
	long long int k;
	long long int a, b;
	
	scanf("%lld", &k);
	
	for(i=1;i<=k;i++){
		scanf("%lld %lld", &a, &b);
		if((a*b)%2 == 0){
			printf("Case #%lld: Party time!\n", i);
		}else{
			printf("Case #%lld: Need more frogs\n", i);
		}
	}
	return 0;
}

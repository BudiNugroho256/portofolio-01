#include <stdio.h>

int main(){
	long long int i;
	long long int k;
	long long int a, b, c;
	
	scanf("%lld", &k); getchar();
	
	for(i=1;i<=k;i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		long long int hasil=a*b/100;
		if(hasil > c){
			printf("Case #%lld: %lld\n", i, c);
		}else{
			printf("Case #%lld: %lld\n", i, hasil);
		}
	}
	return 0;
}

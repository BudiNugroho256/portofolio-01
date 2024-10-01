#include <stdio.h>

int main(){
	long long int a, b, c;
	
	scanf("%lld %lld %lld", &a, &b, &c);
	
	if(c-a == b-c && a<=c && b>=c){
		long long int t=(b-a)/2;
		printf("%lld\n", t);
	}else{
		printf("-1\n");
	}
	
	return 0;
}

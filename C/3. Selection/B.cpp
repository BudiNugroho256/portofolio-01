#include <stdio.h>

int main(){
	long long int k;
	long long int i;
	long long int a,b,c;
	
	scanf("%lld", &k);
	
	for(i=0;i<k;i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(b+c>=a){
			printf("Case #%lld: yes\n", i+1);
		}else{
			printf("Case #%lld: no\n", i+1);
			}
	}
	return 0;
}

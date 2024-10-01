#include <stdio.h>

int main(){
	long long int damage;
	
	scanf("%lld", &damage);
	
	long long int hasildamage=((2*100+(damage-1)*50)*damage/2);
	
	printf("%lld\n", hasildamage);
	
	return 0;
}

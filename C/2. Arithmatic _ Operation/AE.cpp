#include <stdio.h>

int main(){
	long long int point;
	
	scanf("%lld", &point);
	
	long long int hasilpoint=((2*100)+(point-1)*50)*point/2;
	
	printf("%lld\n", hasilpoint);
	
	return 0;
}

#include <stdio.h>

int main(){
	long int i;
	long int k;
	long int sum = 0;
	long int a;
	
	scanf("%ld", &k);
	
	for(i=0;i<k;i++){
		scanf("%ld", &a); 
		sum+=a;
		
		switch(sum){
			case 9 : sum+=12;
						break;
			case 33 : sum+=9;
						break;
			case 76 : sum+=16;
						break;
			case 53 : sum-=16;
						break;
			case 80 : sum-=21;
						break;
			case 97 : sum-=9;
						break;
		}
	}
	printf("%lld\n", sum);
	
	return 0;
}

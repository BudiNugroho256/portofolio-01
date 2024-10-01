#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long int k[n];
	long long int result = 0;
	
	for(int i=0;i<n;i++){
		scanf("%lld", &k[i]);
		result = (result + k[i]) % 40;
		
		switch(result){
			case 30 : result = 10;
				break;
			case 12 : result = 28;
				break;
			case 35 : result = 7;
				break;
		}
	}
	
	printf("%lld\n", result);
	
	return 0;
}

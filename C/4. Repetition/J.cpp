#include <stdio.h>

int main(){
	long long int t;
	long long int n;
	long long int angka;
	long long int hasil = 0;
	
	scanf("%lld", &t);
	
	for(long long int i=1;i<=t;i++){
		
		scanf("%lld", &n);
		
		for(long long int j=1;j<=n;j++){
			
			scanf("%lld", &angka);
			
			hasil += angka;
			
		}
		
		printf("Case #%lld: %lld\n", i, hasil);
		
		hasil = 0;
		
	}
	
	
	return 0;
}

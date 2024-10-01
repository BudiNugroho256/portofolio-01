#include <stdio.h>

int main(){
	int t;
	
	scanf("%d", &t);
	
	for(int i=1;i<=t;i++){
		
		long n, m;
		
		scanf("%ld %ld", &n, &m);
		
		long a[n];
		long result = 0;
		
		for(int j=0;j<n;j++){
			
			scanf("%ld", &a[j]);
		
		}
		
		for(int j=0;j<n;j++){
			
			if(m/a[j]>result){
				
				result = m/a[j];
				
			}
			
		}
	
		printf("Case #%d: %ld\n", i, result);
		
		result = 0;
	
	}
	
	return 0;
}

#include <stdio.h>

int main(){
	int n;
	
	scanf("%d", &n);
	
	long a[100], b[100];
	
	for(int i=1;i<=n;i++){
		scanf("%ld %ld", &a[i], &b[i]);
		
		long c=a[i], d=a[i], e=0;
		
		while(c/b[i]>0){
			e=c/b[i];
			c=c-e*b[i]+e;
			d+=e;
		}
		printf("Case #%d: %ld\n", i, d);
	}
	
	return 0;
}

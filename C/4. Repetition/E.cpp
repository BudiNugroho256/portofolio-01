#include <stdio.h>
#include <stdlib.h>

int main(){
	long long int t;
	scanf("%lld", &t);
	long long int x, p;
	long long int arr[32] = {}, mat[3] = {};
	
	for(long long int i=0;i<t;i++){
		scanf("%lld %lld", &x, &p);
		for(long long int j=0;x>0;j++){
			arr[j]=x%2;
			x/=2;
		}
		mat[i] = arr[p];
	}
	printf("%lld\n%lld\n%lld\n", mat[0], mat[1], mat[2]);
	
	return 0;
}

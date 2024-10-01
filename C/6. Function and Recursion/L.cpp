#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int n, x, y;

		
	for(int i=1;i<=t;i++){
		scanf("%d %d %d", &n, &x, &y);
			int arr[n+1];
			arr[0] = x;
			arr[1] = y;
		for(int j=2;j<=n;j++){
		arr[j] = arr[j-1] - arr[j-2];
	}
	printf("Case #%d: %d\n", i, arr[n]);
	
	}
	
	return 0;
}

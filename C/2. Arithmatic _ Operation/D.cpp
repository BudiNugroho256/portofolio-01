#include <stdio.h>

int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	for(int zx=0;zx<=b;zx++){
		printf("%d\n",a);a++;
	}
	
	return 0;
}

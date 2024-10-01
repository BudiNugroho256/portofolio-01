#include <stdio.h>

int main(){
	int a,b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(int zx=0;zx<b;zx++){
		printf("%d\n",a);a++;
	}
	
	return 0;
	
}

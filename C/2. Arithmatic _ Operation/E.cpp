#include <stdio.h>

int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	int aa=a+b;
	int ab=a-b;
	int ac=a*b;
	int ad=a/b;
	int ae=a%b;
	
	printf("%d\n", aa);
	printf("%d\n", ab);
	printf("%d\n", ac);
	printf("%d\n", ad);
	printf("%d\n", ae);
	
	return 0;
}

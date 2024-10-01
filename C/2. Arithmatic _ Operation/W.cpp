#include <stdio.h>

int main(){
	int a, b, c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	int hasil1=(a/10)%10;
	int hasil2=(b/10)%10;
	int hasil3=(c/10)%10;
	
	printf("%d\n", hasil1);
	printf("%d\n", hasil2);
	printf("%d\n", hasil3);
	
	return 0;
}

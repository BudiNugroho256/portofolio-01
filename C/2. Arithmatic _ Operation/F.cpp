#include <stdio.h>

int main(){
	int a, b, c, d, e, f;
	
	scanf("%d + %d =", &a, &b); getchar();
	scanf("%d + %d =", &c, &d); getchar();
	scanf("%d + %d =", &e, &f); getchar();
	
	int aa=a+b;
	int ab=c+d;
	int ac=e+f;
	
	printf("%d\n", aa);
	printf("%d\n", ab);
	printf("%d\n", ac);
	
	return 0;
}

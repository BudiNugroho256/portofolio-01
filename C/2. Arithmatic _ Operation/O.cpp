#include <stdio.h>

int main(){
	int a,b;
	int c,d;
	int e,f;
	int g,h;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	scanf("%d %d", &e, &f);
	scanf("%d %d", &g, &h);
	
	int ab= a*b;
	int cd= c*d;
	int ef= e*f;
	int gh= g*h;
	
	printf("%d\n", ab);
	printf("%d\n", cd);
	printf("%d\n", ef);
	printf("%d\n", gh);
	
	return 0;
}

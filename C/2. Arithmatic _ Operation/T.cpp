#include <stdio.h>

int main(){
	char pertama[100], kedua[100], ketiga[100], keempat[100], kelima[100];
	int a, b, c, d;
	int e, f, g, h;
	int i, j, k, l;
	int m, n, o, p;
	int q, r, s, t;
	
	scanf("%s %d:%d-%d:%d", &pertama, &a, &b, &c, &d); getchar();
	scanf("%s %d:%d-%d:%d", &kedua, &e, &f, &g, &h); getchar();
	scanf("%s %d:%d-%d:%d", &ketiga, &i, &j, &k, &l); getchar();
	scanf("%s %d:%d-%d:%d", &keempat, &m, &n, &o, &p); getchar();
	scanf("%s %d:%d-%d:%d", &kelima, &q, &r, &s, &t); getchar();
	
	int A=a-1;
	int C=c-1;
	int E=e-1;
	int G=g-1;
	int I=i-1;
	int K=k-1;
	int M=m-1;
	int O=o-1;
	int Q=q-1;
	int S=s-1;
	
	printf("%s %02d:%02d-%02d:%02d\n", pertama, A, b, C, d);
	printf("%s %02d:%02d-%02d:%02d\n", kedua, E, f, G, h);
	printf("%s %02d:%02d-%02d:%02d\n", ketiga, I, j, K, l);
	printf("%s %02d:%02d-%02d:%02d\n", keempat, M, n, O, p);
	printf("%s %02d:%02d-%02d:%02d\n", kelima, Q, r, S, t);
	
	return 0;
}

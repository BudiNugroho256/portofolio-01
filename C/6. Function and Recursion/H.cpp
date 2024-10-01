#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *fiboString(int n, char *a, char *b){
    if(n == 0){
    	return a;
	}else if(n == 1){
		return b;
	}else {
        char *c = (char*) malloc(strlen(a) + strlen(b));
        strcpy(c, b);
        strcat(c, a);
        return fiboString(n-1, b, c);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
	int n; 
	char a[100], b[100];

    for(int i = 1; i <= t; i++){
        scanf("%d %s %s", &n, &a, &b);
        printf("Case #%d: %s\n", i, fiboString(n, a, b));
    }
    return 0;
}

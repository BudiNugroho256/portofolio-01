#include <stdio.h>
#include <string.h>

int main(){
	int a;
	
	scanf("%d", &a);
	
	int i, j, k;
	
	for(i=1;i<=a;i++){
		char z[1000];
		scanf("%s", &z); getchar();
		
		int s;
		scanf("%d", &s); getchar ();
		
		char x, y;
		for(j=0;j<s;j++){
			scanf("%c %c", &x, &y); getchar();
			
			for(k=0;k<strlen(z);k++){
				if (z[k] == x){
					z[k] = y;
				}
			}
		}
		
		printf("Case #%d: %s\n", i, z);
	}

	return 0;
}

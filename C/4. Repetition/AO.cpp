#include <stdio.h>

int main(){
	int k, a, i, j;
	char kata[100];
	
	scanf("%d", &k);
	
	for(i=0;i<k;i++){
		scanf("%d", &a);
		for(j=0;j<=a;j++){
			scanf("%c", &kata[j]);
		}
		printf("Case #%d: ", i+1);
		for(j=0;j<=a;j++){
			if(kata[j]>='a' && kata[j]<='z'){
				printf("%c", kata[j]);
			}
		}
		printf("\n");
	}
	return 0;
}

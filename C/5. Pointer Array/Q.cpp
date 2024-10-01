#include <stdio.h>

int main(){
	int a;
	
	scanf("%d", &a);
		
	int i, j, k;

	
	for(i=1;i<=a;i++){
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		
		int lithea[x][y];
		for(j=0;j<x;j++){
			for(k=0;k<y;k++){
				scanf("%d", &lithea[j][k]);
			}
		}
		
		int hasil[y] = {0};
		
		int orderia[z];
		for(j=0;j<z;j++){
			scanf("%d", &orderia[j]);
			
			for(k=0;k<y;k++){
				if(lithea[orderia[j]-1][k] == 1){
					if(hasil[k] == 0){
						hasil[k] = 1;
					}else{
						hasil[k] = 0;
					}	
				}	
			}
		}
		
		printf("Case #%d:\n", i);
		for(j=0;j<y;j++){
			if(hasil[j] == 0){
				printf("NO\n");
			}else{
				printf ("YES\n");
			}
		}
	}
	
	return 0;
}

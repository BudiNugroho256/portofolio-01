#include <stdio.h>

int main(){
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	int array[x][y];
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			
			scanf("%d", &array[i][j]);
			
		}
		
	}
	
	int t;
	
	int a, b, c;
	
	scanf("%d", &t);
	
	for(int i=0;i<t;i++){
		
		scanf("%d %d %d", &a, &b, &c);
		
		array[a-1][b-1] = c;
		
	}
	
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			
			printf("%d", array[i][j]);
			
			if (j<y-1){
				
				printf(" ");
				
			}
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}

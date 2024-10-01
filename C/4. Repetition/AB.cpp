#include <stdio.h>

int main(){
	int t;
	int n, a, b, c, d;
	int y = 0;
	
	scanf("%d", &t);
	
	for(int i=1;i<=t;i++){
		
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
		
		for(int j=1;j<=n;j++){
			
			if(j%a == 0 || j%b  == 0 || j%c == 0 || j%d == 0){
				
				y++;
					
			}
			
		}
		
		printf("Case #%d: %d\n", i, y);
		
		y=0;
		
	}
	
	return 0;
}

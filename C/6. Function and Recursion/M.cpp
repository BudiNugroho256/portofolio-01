#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	int a, b;
	
	for(int i=1;i<=t;i++){
		scanf("%d %d", &a, &b);
		
		while(a>1 && a!=b){
			if(a%2 == 0){
				a/=2;
			}else{
				a = a*3+1;
			}
		}
		
		printf("Case #%d: ", i);
		
		if(a == b){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}

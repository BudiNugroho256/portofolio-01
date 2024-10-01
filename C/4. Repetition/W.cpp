#include<stdio.h>

int main(){
	int a,b,c;
	int i, j;
	long long int even, odd;
	even = 0;
	scanf("%d", &a);
	
	for(i = 0; i < a; i++){
		scanf("%d", &b);
		for(j = 0; j < b; j++){
			scanf("%d", &c);
			if(c % 2 == 0){
				even++;
			}	
		}
		odd = b - even;
		
		printf("Odd group : %lld integer(s).\n", odd);
		printf("Even group : %lld integer(s).\n", even);
		printf("\n");
	}
	
	return 0;
}

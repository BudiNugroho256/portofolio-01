#include <stdio.h>

int main(){
	char nama[100];
	
	scanf("%[^\n]", nama); getchar();
	
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", nama);
	
	return 0;
}

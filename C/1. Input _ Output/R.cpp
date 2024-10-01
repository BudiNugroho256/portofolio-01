#include <stdio.h>

int main(){
	char id[100];
	char name[100]; 
	char clas[100];
	int num;
	
	scanf("%s\n", id);
	scanf("%[^\n]", name);
	scanf("%s %d", clas, &num);
	
	printf("Id    : %s\n", id);
	printf("Name  : %s\n", name);
	printf("Class : %s\n", clas);
	printf("Num   : %d\n", num);
	
	return 0;
}

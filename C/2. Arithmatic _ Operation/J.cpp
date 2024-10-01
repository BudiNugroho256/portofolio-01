#include <stdio.h>

int main(){
	float total, robot;
	
	scanf("%f %f", &total, &robot); getchar();
	
	float hasil=(robot/total)*100;
	
	printf("%.4f%%\n", hasil);
	
	return 0;
}

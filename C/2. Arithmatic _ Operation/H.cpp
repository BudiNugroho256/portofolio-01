#include <stdio.h>

int main(){
	float aa, ab, ac, ad;
	float ba, bb, bc, bd;
	float ca, cb, cc, cd;
	
	scanf("%f %f %f %f", &aa, &ab, &ac, &ad); getchar();
	scanf("%f %f %f %f", &ba, &bb, &bc, &bd); getchar();
	scanf("%f %f %f %f", &ca, &cb, &cc, &cd); getchar();
	
	float a = (aa/1)*2+(ab/2)*4+(ac/3)*6+(ad/4)*4;
	float b = (ba/1)*2+(bb/2)*4+(bc/3)*6+(bd/4)*4;
	float c = (ca/1)*2+(cb/2)*4+(cc/3)*6+(cd/4)*4;
	
	printf("%.2f\n", a);
	printf("%.2f\n", b);
	printf("%.2f\n", c);
	
	return 0;
}

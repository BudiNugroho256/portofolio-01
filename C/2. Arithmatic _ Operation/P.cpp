#include <stdio.h>

int main(){
	double diskon1, hargaSetelah1;
	double diskon2, hargaSetelah2;
	double diskon3, hargaSetelah3;
	double diskon4, hargaSetelah4;
	
	scanf("%lf %lf", &diskon1, &hargaSetelah1);
	scanf("%lf %lf", &diskon2, &hargaSetelah2);
	scanf("%lf %lf", &diskon3, &hargaSetelah3);
	scanf("%lf %lf", &diskon4, &hargaSetelah4);
	
	double hargaSebelum1=(100/(100-diskon1)*hargaSetelah1);
	double hargaSebelum2=(100/(100-diskon2)*hargaSetelah2);
	double hargaSebelum3=(100/(100-diskon3)*hargaSetelah3);
	double hargaSebelum4=(100/(100-diskon4)*hargaSetelah4);
	
	printf("$%.2lf\n", hargaSebelum1);
	printf("$%.2lf\n", hargaSebelum2);
	printf("$%.2lf\n", hargaSebelum3);
	printf("$%.2lf\n", hargaSebelum4);
	
	return 0;
}

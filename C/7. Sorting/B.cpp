#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");
	long long int n;
	long long int r[1000];
	char m[1000][1000];
	
	fscanf(fp, "%lld", &n);
	
	for(long long int i=0; i<n; i++){
		fscanf(fp, "%lld#%[^\n]", &r[i], &m[i]);
	}
	
	for(long long int i=0;i<n-1;i++){
		for(long long int j=i+1;j<n;j++){
			if(strcmp(m[j], m[i]) < 0){
				char tempm[1000];
				strcpy(tempm, m[i]);
				int tempr = r[i];
				r[i] = r[j];
				strcpy(m[i], m[j]);
				strcpy(m[j], tempm);
				r[j] = tempr;
			}
		}
	}
	
	for(long long int i=0;i<n;i++){
		printf("%lld %s\n", r[i], m[i]);
	}
	
	fclose(fp);
	
	return 0;
}

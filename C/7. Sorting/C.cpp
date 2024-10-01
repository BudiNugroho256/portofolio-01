#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char r[1000][100];
	char m[1000][100];
	char tmpr[100];
	char tmpm[100];
	FILE * fp;
	fp=fopen("testdata.in", "r");
	
	fscanf(fp, "%d", &n);
	
	for(int i=0;i<n;i++){
		fscanf(fp, "%s %s", &r[i], &m[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(r[i], r[j])>0){
				strcpy(tmpr, r[i]);
				strcpy(r[i], r[j]);
				strcpy(r[j], tmpr);
				
				strcpy(tmpm, m[i]);
				strcpy(m[i], m[j]);
				strcpy(m[j], tmpm);
			}
		}
	}
	
	fclose(fp);
	
	for(int i=0;i<n;i++){
		printf("%s %s\n", r[i], m[i]);
	}
	
	return 0;
}

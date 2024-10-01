#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");
	long long int i = 0;
	char x[1005][1005];
	char y[1005][1005];
	long long int z[1005];
	
	while(!feof(fp)){
		fscanf(fp, "%[^\#]#%[^\#]#%lld\n", &x[i], &y[i], &z[i]);
		i++;
	}

	for(long long int a=0;a<i-1;a++){
		for(long long int b=a+1;b<i;b++){
			if(z[b] > z[a]){
				char tempxa[1005];
				char tempya[1005];
				int tempza;
				strcpy(tempxa, x[a]);
				strcpy(x[a], x[b]);
				strcpy(x[b], tempxa);
				strcpy(tempya, y[a]);
				strcpy(y[a], y[b]);
				strcpy(y[b], tempya);
				tempza = z[a];
				z[a] = z[b];
				z[b] = tempza;
			}else if(z[b] == z[a]){
				if(strcmp(x[b], x[a]) < 0){
					char tempxb[1005];
					char tempyb[1005];
					int tempzb;
					strcpy(tempxb, x[a]);
					strcpy(x[a], x[b]);
					strcpy(x[b], tempxb);
					strcpy(tempyb, y[a]);
					strcpy(y[a], y[b]);
					strcpy(y[b], tempyb);
					tempzb = z[a];
					z[a] = z[b];
					z[b] = tempzb;
				}
			}
		}
	}
	
	for(long long int a=0;a<i;a++){
		printf("%s by %s - %lld\n", x[a], y[a], z[a]);
	}
	
	fclose(fp);
	
	return 0;
}

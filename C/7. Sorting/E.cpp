#include <stdio.h>

struct World{
	char x[1005];
	double y;
	char z;	
};

void Change(struct World *j, struct World *k){
	struct World temp3 = *j;
	*j = *k;
	*k = temp3;
	
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
	struct World n[1005];
	long long int i = 0;
	double temp[1005];
	
	while(!feof(fp)){
		fscanf(fp, "%[^\#]#%lf#%c\n", &n[i].x, &n[i].y, &n[i].z);
		if(n[i].z == 'F'){
			temp[i] = (n[i].y - 32.00)*5.00/9.00;
		}else{
			temp[i] = n[i].y;
		}
		i++;
	}
	
	for(long long int a=0;a<i-1;a++){
		for(long long int b=a+1;b<i;b++){
			if(temp[b] < temp[a]){
				double temp2;
				temp2 = temp[a];
				temp[a] = temp[b];
				temp[b] = temp2;
				Change(&n[a], &n[b]);
			}else if(temp[b] == temp[a]){
				double temp4;
				temp4 = temp[a];
				temp[a] = temp[b];
				temp[b] = temp4;
				Change(&n[a], &n[b]);
			}
		}
	}
	
	for(long long int l=0;l<i;l++){
		printf("%s is %.2lf%c\n", n[l].x, n[l].y, n[l].z);
	}	
	
	fclose(fp);
	return 0;
}

#include <stdio.h>

int a[55][55];
int b[55][55];
int c[55][55];
int d[55][55] = {0};
int sum[55][55] = {0};

void operation(int a[][55], int b[][55], int ipt, int d[][55]){
	for(int i=0;i<ipt;i++){
		for(int j=0;j<ipt;j++){
			d[i][j]=0;
			for(int k=0;k<ipt;k++)
			d[i][j] += a[i][k]*b[k][j];
		}
	}
}

int main(){
	int css;
	int cnt;
	int ipt;
	int i, j;
	
	scanf("%d", &css);
	
	for(cnt=1;cnt<=css;cnt++){
		scanf("%d", &ipt);
		for(i=0;i<ipt;i++)
			for(j=0;j<ipt;j++)
			scanf("%d", &a[i][j]);
		for(i=0;i<ipt;i++)
			for(j=0;j<ipt;j++)
			scanf("%d", &b[i][j]);
		for(i=0;i<ipt;i++)
			for(j=0;j<ipt;j++)
			scanf("%d", &c[i][j]);
			
		operation(a, b, ipt, d);
		operation(d, c, ipt, sum);
		
		printf("Case #%d:\n", cnt);
		for(i=0;i<ipt;i++){
			for(j=0;j<ipt;j++){
				if(j<ipt-1) printf("%d ", sum[i][j]);
				else printf("%d", sum[i][j]);
				sum[i][j]=0;
			}
			puts("");
		}
	}
	return 0;
}

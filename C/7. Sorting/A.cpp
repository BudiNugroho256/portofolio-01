#include<stdio.h>

void swap (long long int *m, long long int*n){
	long long int temp = *m;
	*m = *n;
	*n = temp;
}

int split(long long int array[], int left, int right){
	long long int pivot = array[right];
	int x = left-1;
	for(int y = left; y<right;y++){
		if(array[y] < pivot){
			x++;
			swap(&array[x], &array[y]);
		}
	}
	swap(&array[right], &array[x+1]);
	return x+1;
}

void quickSort(long long int array[] , int left, int right){
	if(left<right){
		int pe = split(array, left, right);
		
		quickSort(array, left, pe-1);
		quickSort(array, pe+1, right);
	}
}

int main(){
	
	int t;
	scanf("%d", &t);
	
	long long int array[t];
	for (int x=0; x<t; x++) {
		scanf("%lld", &array[x]);
	}
	
	quickSort(array, 0, t-1);
	
	long long int different[t-1];
	long long int maximum = 0;
	
	for (int x=0; x<t-1; x++) {
		different[x] = array[x+1] - array[x];
		if (different[x]>maximum) {
			maximum = different[x];
		}
	}
	
	int t_maximum = 0;
	for (int x=0; x<t-1; x++) {
		if (different[x]==maximum) {
			
			t_maximum++;
			if (t_maximum>1) {
				printf(" ");
			}
			
			printf("%lld %lld", array[x], array[x+1]);
		}
	}
	
	printf("\n");
			
	return 0;
}

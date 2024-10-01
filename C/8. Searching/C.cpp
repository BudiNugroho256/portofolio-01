#include<stdio.h>
#include<conio.h>

int deleteElement(int *arr, int *n, int x)
{ 
   int i; 
   for (i=0; i<n; i++){
   		if (arr[i] == x) 
        break; 
   }

  
   if (i < n) 
   { 
     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
} 

void findMissing(int *a, int b[], int *n, int m) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        int j; 
        for (j = 0; j < m; j++) 
            if (a[i] == b[j]) 
                deleteElement(a,n,b[j]); 
    } 
}

int largest(int arr[], int n) 
{ 
    int i; 
      
    int max = arr[0]; 
  
    for (i = 1; i < n; i++) 
        if (arr[i] > max) 
            max = arr[i]; 
  
    return max; 
}

int main()
{
  int n,m, *a,*b;

  scanf("%d", &n);
  
  a = (int*) malloc(n * sizeof(int));

  scanf("%d", &m);
  
  b = (int*) malloc(m * sizeof(int));
  
  for(int i = 0; i < n; ++i)
  {
    scanf("%d", a + i);
  }

  for(int i = 0; i < m; ++i)
  {
    scanf("%d", b + i);
  }

  findMissing(a,b,n,m);
  printf("Maximum number is %d\n",largest(a,n));

  return 0;
}

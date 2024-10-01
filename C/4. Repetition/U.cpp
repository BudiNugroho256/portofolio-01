#include <stdio.h>
#include <string.h>

int main(){
    int a, b;
    int lili = 0;
    int bibi = 0; 
    char arr[100];
    scanf("%d", &a);
    for (int i=0 ; i<a; i++){
        scanf("%d", &b); //5
        scanf("%s", arr);
        //printf("%d", total_string);
        for (int i=0 ; i<b ; i++){
            if (arr[i] == 'L'){
                lili++;
            }
            else if (arr[i] == 'B'){
                bibi++;
            }
       }if (lili < bibi){
            printf("Bibi\n");
        }
        else if( bibi < lili){
            printf("Lili\n");
        }
        else if (lili == bibi) { 
            printf("None\n");
        }
        lili = 0 ; bibi =0; 
        arr[0] = '\0';
    }
}

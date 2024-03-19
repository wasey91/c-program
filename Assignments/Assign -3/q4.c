#include<stdio.h>
int main(){
    int n = 4, i, j;
    for(i= 0; i<=2*n-2; i++){
        for(j = 0; j<=2*n-1; j++){
            printf(" %d%d " ,i ,j);
        }
        printf("\n");
    }
    return 0;
}

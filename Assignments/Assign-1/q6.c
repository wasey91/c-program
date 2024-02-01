#include<stdio.h>
int main(){
    int a =5, b = 6, i, result = 0;
    for(i = 1; i<= b; i++){
        result = a + result;
    }
    printf("%d " ,result);
    return 0;
}

#include<stdio.h>
int main(){
    int n = -12345, sum = 0,  rem;
    while(n>0){
        rem = -n%10;
        sum =  sum + rem;
        n = n/10;
    }
    printf("the sum of digit = %d" ,sum);
    return 0;
}

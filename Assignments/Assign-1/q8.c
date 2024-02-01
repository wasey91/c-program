#include<stdio.h>
int main(){
    int n = 6, i, count =0;
    for(i=1; i<= n; i++){
        if(n%i ==0){
            count++;
        }
    }
    if(count ==2){
        printf("The given number is prime = %d" ,n);
    }
    else
    {
      printf("The given number is not prime = %d" ,n);

    }
    return 0;
}


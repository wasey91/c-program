#include<stdio.h>
int main(){
    int i;
    int max;
    int min;

    int size = 10;
    int a[10] = {2,4,10,1,50,100,76,42,97,5};

    min = a[0];
    max = a[0];

    for(i = 0; i<size; i++){
        if(max<a[i]){
            max =a[i];

        if(min>a[i])
          min = a[i];

        }

    }
    printf("maximum %d\n" ,max);
    printf("minimum %d" ,min);
    return 0;
}

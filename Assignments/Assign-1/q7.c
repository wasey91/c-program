#include<stdio.h>
int main(){
    int first = 100, second = 300,temp;
    temp = first;
    first = second;
    second =  temp;
    printf("%d\n" ,first);
    printf("%d" ,second);
    return 0;

}

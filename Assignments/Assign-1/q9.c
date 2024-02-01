#include<stdio.h>
int main(){
    int year = 1900;
    if(year%400 ==0){
        printf("The year is leap year = %d" ,year);
    }
    else if(year%100 ==0){
        printf("The year is not leap year = %d" ,year);
    }
     else if(year%4 ==0){
        printf("The year is leap year = %d" ,year);
    }
    else
    {
        printf("The year is not leap year = %d " ,year);
    }
    return 0;
}

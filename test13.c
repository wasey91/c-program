#include<stdio.h>
int one_count(int n){
 int count = 0;
 while(n!= 0){
 int digit = n%10;
 n = n/10;
  if(digit == 1){
    count++;
  }
 }
 printf("%d" ,count);
}
int main(){
 one_count(123152);
 return 0;
}


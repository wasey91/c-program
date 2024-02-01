#include<stdio.h>
int main(){
  int i, fact = 1;
  for(i=1; i<=5; i++){
    fact = i*fact;
  }
  printf("factorial of a number %d",fact);
  return 0;
}

#include<stdio.h>
int binary_search(int a[],int i,int j,int x){
    if(i==j){
        if(a[i] == x){
            return i;
        }
        else{
            return -1;
        }
    }
    else
    {
       int mid = (i+j)/2;
        if(a[mid] == x){
            return mid;
        }
        else{
            if(a[mid] > x){
                binary_search(a,i,mid-1,x);
            }
            else{
                binary_search(a,mid+1,j,x);
            }
        }
    }
}
int main(){

    int size = 10;
    int i = 0;
    int j = size-1;
    int a[10] = {10,20,30,40,50,60,70,80,90,100};

    int x = 40;
    int index = binary_search(a,i, j,x);
    printf("%d ",index);
    return 0;
}


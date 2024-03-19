#include <stdio.h>

int linearSearch(int arr[], int size, int key)
{

    if (size == 0) {
        return -1;
    }

    if (arr[size - 1] == key) {

        return size - 1;
    }
    return linearSearch(arr, size - 1, key);
}


int main()
{
    int size = 5;
    int arr[] = { 5, 15, 6, 9, 4 };
    int key = 4;
    int index = linearSearch(arr, size, key);
    printf("%d ",index);
    return 0;
}


#include<stdio.h>

int main()
{
    int num;
    int sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num >10)
    {
        sum = 0;
        while(num > 0)
        {
            rem = num % 10;
            sum += rem;
            num = num / 10;
        }

        num = sum;
    }

    printf("%d", sum);

    return 0;
}

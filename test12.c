#include <stdio.h>
int main()
{
	int arr[8] = {4,3,2,1,6,7,9,10};
    int i;
    int Size = 8;
	int first, second;
    first = second;
	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}
	}
	printf("\n The Largest Number in this Array =  %d", first);
	printf("\n The Second Largest Number in this Array =  %d", second);

	return 0;+
}

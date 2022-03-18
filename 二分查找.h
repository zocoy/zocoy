#include<stdio.h>
int binaryt_search(int* a, int high, int guess)
{
	int low = 0;
	int mid, i;
	for (i = 0; i < high; i++)
	{
		mid = (high + low) / 2;
		if (guess == a[mid])
			return mid;
		if (guess > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return 0;
}
#include "Swap.h"

void swap(int arr[], int a, int b)
{
	int temp = a;
	arr[a] = arr[b];
	arr[b] = arr[temp];
}
// Write a C program for searching an element in the given array.

#include<stdio.h>

int main()
{
	int arr[] = {10, 23, 11, 34, 35, 12};
	int n = 6;
	int key = 34;
	int i = 0;
	
	int findElement()
	{
		for(i = 0; i < n; i++)
		{
			if(arr[i] == key)
			{
				printf("Element found at index : %d", i);
				break;
			}
		}
		if(i == n)
		{
			printf("Element not found.");
		}
	}
}

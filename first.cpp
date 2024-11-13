#include<stdio.h>
float average(int* a, int size)
{
	int count ;
	for(int i= 0 ; i < size ; i++)
	{
		count+=a[i];
	}
	printf("\nAverage of given array is %f ", (float)count/size);
	return 0;
	
}
int main()
{
	int n ; 
	int arr[n];
	printf(" Enter number of elements in array :");
	scanf("%d", &n);
	for (int i = 0 ; i <n ; i++)
	{
		printf("\nElement no. %d:",i+1);
		scanf("%d", &arr[i] );
	}
    average(arr , n );

	return 0;
}
